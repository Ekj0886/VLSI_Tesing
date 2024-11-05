/* Logic Simulator
 * Last update: 2006/09/20 */
#include <iostream>
#include "gate.h"
#include "circuit.h"
#include "ReadPattern.h"
#include "GetLongOpt.h"
using namespace std;

extern GetLongOpt option;

//do logic simulation for test patterns
void CIRCUIT::LogicSimVectors()
{
    cout << "Run logic simulation" << endl;
    ofstream outfile("sim_output.txt");
    //read test patterns
    while (!Pattern.eof()) {
        Pattern.ReadNextPattern();
        SchedulePI();
        LogicSim();
        PrintIO();
        DumpIO();
    }
    return;
}

//do event-driven logic simulation
void CIRCUIT::LogicSim()
{
    GATE* gptr;
    VALUE new_value;
    for (unsigned i = 0;i <= MaxLevel;i++) {
        while (!Queue[i].empty()) {
            gptr = Queue[i].front();
            Queue[i].pop_front();
            gptr->ResetFlag(SCHEDULED);
            new_value = Evaluate(gptr);
            if (new_value != gptr->GetValue()) {
                gptr->SetValue(new_value);
                ScheduleFanout(gptr);
            }
        }
    }
    return;
}

//Used only in the first pattern
void CIRCUIT::SchedulePI()
{
    for (unsigned i = 0;i < No_PI();i++) {
        if (PIGate(i)->GetFlag(SCHEDULED)) {
            PIGate(i)->ResetFlag(SCHEDULED);
            ScheduleFanout(PIGate(i));
        }
    }
    return;
}

//schedule all fanouts of PPIs to Queue
void CIRCUIT::SchedulePPI()
{
    for (unsigned i = 0;i < No_PPI();i++) {
        if (PPIGate(i)->GetFlag(SCHEDULED)) {
            PPIGate(i)->ResetFlag(SCHEDULED);
            ScheduleFanout(PPIGate(i));
        }
    }
    return;
}

//set all PPI as 0
void CIRCUIT::SetPPIZero()
{
    GATE* gptr;
    for (unsigned i = 0;i < No_PPI();i++) {
        gptr = PPIGate(i);
        if (gptr->GetValue() != S0) {
            gptr->SetFlag(SCHEDULED);
            gptr->SetValue(S0);
        }
    }
    return;
}

//schedule all fanouts of gate to Queue
void CIRCUIT::ScheduleFanout(GATE* gptr)
{
    for (unsigned j = 0;j < gptr->No_Fanout();j++) {
        Schedule(gptr->Fanout(j));
    }
    return;
}

//initial Queue for logic simulation
void CIRCUIT::InitializeQueue()
{
    SetMaxLevel();
    Queue = new ListofGate[MaxLevel + 1];
    return;
}

//evaluate the output value of gate
VALUE CIRCUIT::Evaluate(GATEPTR gptr)
{
    GATEFUNC fun(gptr->GetFunction());
    VALUE cv(CV[fun]); //controling value
    VALUE value(gptr->Fanin(0)->GetValue());
    switch (fun) {
        case G_AND:
        case G_NAND:
            for (unsigned i = 1;i<gptr->No_Fanin() && value != cv;++i) {
                value = AndTable[value][gptr->Fanin(i)->GetValue()];
            }
            break;
        case G_OR:
        case G_NOR:
            for (unsigned i = 1;i<gptr->No_Fanin() && value != cv;++i) {
                value = OrTable[value][gptr->Fanin(i)->GetValue()];
            }
            break;
        default: break;
    }
    //NAND, NOR and NOT
    if (gptr->Is_Inversion()) { value = NotTable[value]; }
    return value;
}

extern GATE* NameToGate(string);

void PATTERN::Initialize(char* InFileName, int no_pi, string TAG)
{
    patterninput.open(InFileName, ios::in);
    if (!patterninput) {
        cout << "Unable to open input pattern file: " << InFileName << endl;
        exit( -1);
    }
    string piname;
    while (no_pi_infile < no_pi) {
        patterninput >> piname;
        if (piname == TAG) {
            patterninput >> piname;
            inlist.push_back(NameToGate(piname));
            no_pi_infile++;
        }
        else {
            cout << "Error in input pattern file at line "
                << no_pi_infile << endl;
            cout << "Maybe insufficient number of input\n";
            exit( -1);
        }
    }
    return;
}

//Assign next input pattern to PI
void PATTERN::ReadNextPattern()
{
    char V;
    for (int i = 0;i < no_pi_infile;i++) {
        patterninput >> V;
        if (V == '0') {
            if (inlist[i]->GetValue() != S0) {
                inlist[i]->SetFlag(SCHEDULED);
                inlist[i]->SetValue(S0);
            }
        }
        else if (V == '1') {
            if (inlist[i]->GetValue() != S1) {
                inlist[i]->SetFlag(SCHEDULED);
                inlist[i]->SetValue(S1);
            }
        }
        else if (V == 'X') {
            if (inlist[i]->GetValue() != X) {
                inlist[i]->SetFlag(SCHEDULED);
                inlist[i]->SetValue(X);
            }
        }
    }
    //Take care of newline to force eof() function correctly
    patterninput >> V;
    if (!patterninput.eof()) patterninput.unget();
    return;
}

void CIRCUIT::PrintIO()
{
    register unsigned i;
    for (i = 0;i<No_PI();++i) { cout << PIGate(i)->GetValue(); }
    cout << " ";
    for (i = 0;i<No_PO();++i) { cout << POGate(i)->GetValue(); }
    cout << endl;
    return;
}

void CIRCUIT::DumpIO() {
    ofstream outfile("sim_output.txt", ios::app);

    register unsigned i;
    outfile << "PI: ";
    for (i = 0;i<No_PI();++i) { outfile << PIGate(i)->GetValue(); }
    outfile << " PO: ";
    for (i = 0;i<No_PO();++i) { outfile << POGate(i)->GetValue(); }
    outfile << endl;
    return;
}

void CIRCUIT::MODDumpIO() {
    ofstream outfile("mod_output.txt", ios::app);

    register unsigned i;
    outfile << "PI: ";
    for (i = 0;i<No_PI();++i) { outfile << PIGate(i)->GetValue(); }
    outfile << " PO: ";
    for (i = 0;i<No_PO();++i) { outfile << POGate(i)->GetValue(); }
    outfile << endl;
    return;
}

void CIRCUIT::GeneratePattern(int num, bool unknown, string file) {

    srand(time(0));
    ofstream outfile(file);

    for(unsigned int i = 0; i < PIlist.size(); i++) {
        outfile << "PI " << PIlist[i]->GetName() << " ";
    }outfile << endl;

    if(unknown) {
        for(int i = 0; i < num; i++) {
            for(unsigned int q = 0; q < PIlist.size(); q++) {
                int randnum = int( 2.0*(rand() / (RAND_MAX + 1.0)) ); // 0 or 1
                if(randnum) outfile << "X";
                else        outfile << int( 2.0*(rand() / (RAND_MAX + 1.0)) );
            } outfile << endl;
        }
    }
    else {
        for(int i = 0; i < num; i++) {
            for(unsigned int q = 0; q < PIlist.size(); q++) outfile << int( 2.0*(rand() / (RAND_MAX + 1.0)) ); // 0 or 1
            outfile << endl;
        }
    }

    return;

}

void CIRCUIT::ModLogicSimVectors()
{
    cout << "Run logic simulation" << endl;
    ofstream outfile("mod_output.txt");
    //read test patterns
    while (!Pattern.eof()) {
        Pattern.ReadNextPattern();
        SchedulePI();
        ModLogicSim();
        PrintIO();
        MODDumpIO();
    }
    return;
}

VALUE toVAL(MODVAL mod) {
    switch(mod) {
        case(B0) : return S0;
        case(B1) : return S1;
        case(BX) : return X;
        case(iBX): return X;
        default  : return S0;
    }
}

MODVAL toMOD(VALUE value) {
    switch(value) {
        case(S0): return B0;
        case(S1): return B1;
        case(X) : return BX;
        default : return B0;
    }
}

void CIRCUIT::ModLogicSim()
{
    GATE* gptr;
    VALUE new_value;
    for (unsigned i = 0;i <= MaxLevel;i++) {
        while (!Queue[i].empty()) {
            gptr = Queue[i].front();
            Queue[i].pop_front();
            gptr->ResetFlag(SCHEDULED);
            new_value = CPU_Evaluate(gptr);  
            if (new_value != gptr->GetValue()) {
                gptr->SetValue(new_value);
                ScheduleFanout(gptr);
            }
        }
    }
    return;
}

VALUE CIRCUIT::CPU_Evaluate(GATEPTR gptr)
{
    GATEFUNC fun(gptr->GetFunction());
    VALUE value(gptr->Fanin(0)->GetValue());
    MODVAL val = toMOD(value);
    switch (fun) {
        case G_AND:
        case G_NAND:
            for (unsigned i = 1;i<gptr->No_Fanin();++i) val = static_cast<MODVAL> (val & toMOD(gptr->Fanin(i)->GetValue()));
            break;
        case G_OR:
        case G_NOR:
            for (unsigned i = 1;i<gptr->No_Fanin();++i) val = static_cast<MODVAL> (val | toMOD(gptr->Fanin(i)->GetValue()));
            break;
        default: break;
    }
    //NAND, NOR and NOT
    if (gptr->Is_Inversion()) { val = static_cast<MODVAL>(~static_cast<int>(val) & 0b11); }
    value = toVAL(val);

    return value;
}