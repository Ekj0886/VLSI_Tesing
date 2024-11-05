#include <iostream>
#include <ctime>
#include "circuit.h"
#include "GetLongOpt.h"
#include "ReadPattern.h"
using namespace std;

// All defined in readcircuit.l
extern char* yytext;
extern FILE *yyin;
extern CIRCUIT Circuit;
extern int yyparse (void);
extern bool ParseError;

extern void Interactive();

GetLongOpt option;

int SetupOption(int argc, char ** argv)
{
    option.usage("[options] input_circuit_file");
    option.enroll("help", GetLongOpt::NoValue,
            "print this help summary", 0);
    option.enroll("logicsim", GetLongOpt::NoValue,
            "run logic simulation", 0);
    option.enroll("plogicsim", GetLongOpt::NoValue,
            "run parallel logic simulation", 0);
    option.enroll("fsim", GetLongOpt::NoValue,
            "run stuck-at fault simulation", 0);
    option.enroll("stfsim", GetLongOpt::NoValue,
            "run single pattern single transition-fault simulation", 0);
    option.enroll("transition", GetLongOpt::NoValue,
            "run transition-fault ATPG", 0);
    option.enroll("input", GetLongOpt::MandatoryValue,
            "set the input pattern file", 0);
    option.enroll("output", GetLongOpt::MandatoryValue,
            "set the output pattern file", 0);
    option.enroll("bt", GetLongOpt::OptionalValue,
            "set the backtrack limit", 0);
    // ass0
    option.enroll("ass0", GetLongOpt::NoValue,
            "assignment0", 0);        
    // ass1
    option.enroll("path", GetLongOpt::NoValue,
            "find path", 0);
    option.enroll("start", GetLongOpt::MandatoryValue,
            "set start of path", 0);
    option.enroll("end", GetLongOpt::MandatoryValue,
            "set end of path", 0);
    // ass2        
    option.enroll("pattern", GetLongOpt::NoValue,
            "Generate pattern", 0);
    option.enroll("num", GetLongOpt::MandatoryValue,
            "number of pattern", 0);
    option.enroll("unknown", GetLongOpt::NoValue,
            "include uknown or not", 0);
    option.enroll("mod_logicsim", GetLongOpt::NoValue,
            "Modded logic simulator", 0);
    // ass3
    option.enroll("simulator", GetLongOpt::MandatoryValue,
            "Generate simulator code", 0);
    // ass4 
    option.enroll("check_point", GetLongOpt::NoValue,
            "Implement Check Point Theorem", 0);
    option.enroll("bridging", GetLongOpt::NoValue, 
            "Create Bridging fault list", 0);
    // ass5 
    option.enroll("cfsim", GetLongOpt::NoValue,
            "run check-point stuck at fault simulation", 0);

    int optind = option.parse(argc, argv);
    if ( optind < 1 ) { exit(0); }
    if ( option.retrieve("help") ) {
        option.usage();
        exit(0);
    }
    return optind;
}

int main(int argc, char ** argv)
{
    int optind = SetupOption(argc, argv);
    clock_t time_init, time_end;
    time_init = clock();
    //Setup File
    if (optind < argc) {
        if ((yyin = fopen(argv[optind], "r")) == NULL) {
            cout << "Can't open circuit file: " << argv[optind] << endl;
            exit( -1);
        }
        else {
            string circuit_name = argv[optind];
            string::size_type idx = circuit_name.rfind('/');
            if (idx != string::npos) { circuit_name = circuit_name.substr(idx+1); }
            idx = circuit_name.find(".bench");
            if (idx != string::npos) { circuit_name = circuit_name.substr(0,idx); }
            Circuit.SetName(circuit_name);
        }
    }
    else {
        cout << "Input circuit file missing" << endl;
        option.usage();
        return -1;
    }
    cout << "Start parsing input file\n";
    yyparse();
    if (ParseError) {
        cerr << "Please correct error and try Again.\n";
        return -1;
    }
    fclose(yyin);
    Circuit.FanoutList();
    Circuit.SetupIO_ID();
    Circuit.Levelize();
    Circuit.Check_Levelization();
    Circuit.InitializeQueue();

    if (option.retrieve("logicsim")) {
        //logic simulator
        Circuit.InitPattern(option.retrieve("input"));
        Circuit.LogicSimVectors();
    }
    else if (option.retrieve("plogicsim")) {
        //parallel logic simulator
        Circuit.InitPattern(option.retrieve("input"));
        Circuit.ParallelLogicSimVectors();
    }
    else if (option.retrieve("stfsim")) {
        //single pattern single transition-fault simulation
        Circuit.MarkOutputGate();
        Circuit.GenerateAllTFaultList();
        Circuit.InitPattern(option.retrieve("input"));
        Circuit.TFaultSimVectors();
    }
    else if (option.retrieve("transition")) {
        Circuit.MarkOutputGate();
        Circuit.GenerateAllTFaultList();
        Circuit.SortFaninByLevel();
        if (option.retrieve("bt")) {
            Circuit.SetBackTrackLimit(atoi(option.retrieve("bt")));
        }
        Circuit.TFAtpg();
    }
    else if (option.retrieve("ass0")) {

        cout << "\nAnalizing circuit: " << Circuit.GetName() << endl;
        Circuit.GetGate();
        Circuit.GetNet();
        cout << endl;

    }
    else if(option.retrieve("path")) {
        string start, end;
        if(option.retrieve("start")) start = option.retrieve("start");
        else {
            cout << "Missing start of path" << endl;
            goto jump;
        }
        if(option.retrieve("end")) end = option.retrieve("end");
        else {
            cout << "Missing end of path" << endl;
            goto jump;
        }

        // cout << start << " " << end << endl;
        Circuit.GetPath(start, end);

    }
    else if(option.retrieve("pattern")) {
        Circuit.GeneratePattern(stoi(option.retrieve("num")), option.retrieve("unknown"), option.retrieve("output"));
        cout << option.retrieve("num") <<" Pattern for " << Circuit.GetName() << " generated" << endl;
    }
    else if(option.retrieve("mod_logicsim")) {
        Circuit.InitPattern(option.retrieve("input"));
        Circuit.ModLogicSimVectors();
    }
    else if(option.retrieve("simulator")) {
        Circuit.InitPattern(option.retrieve("input"));
        Circuit.SimulatorGenerate( option.retrieve("simulator"), option.retrieve("input") );
        cout << "Generate simulator file: " << option.retrieve("simulator") << endl;
    }
    else if(option.retrieve("check_point")) {
        Circuit.GenerateAllFaultList();
        Circuit.GenerateCheckPointFaultList();
        Circuit.CheckPointOutput();
    }
    else if(option.retrieve("bridging")) {
        Circuit.GenerateBridgeFaultList(option.retrieve("output"));
    }
    else if(option.retrieve("cfsim")) {
        Circuit.GenerateAllFaultList();
        Circuit.GenerateCheckPointFaultList();
        Circuit.LoadCPFlist();
        Circuit.SortFaninByLevel();
        Circuit.MarkOutputGate();
        Circuit.Atpg();
    }
    else {
        Circuit.GenerateAllFaultList();
        Circuit.SortFaninByLevel();
        Circuit.MarkOutputGate();
        if (option.retrieve("fsim")) {
            //stuck-at fault simulator
            Circuit.InitPattern(option.retrieve("input"));
            Circuit.FaultSimVectors();
        }

        else {
            if (option.retrieve("bt")) {
                Circuit.SetBackTrackLimit(atoi(option.retrieve("bt")));
            }
            //stuck-at fualt ATPG
            Circuit.Atpg();
        }
    }

    jump:
    time_end = clock();
    cout << "total CPU time = " << double(time_end - time_init)/CLOCKS_PER_SEC << endl;
    cout << endl;
    return 0;
}
