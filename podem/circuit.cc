#include <bits/stdc++.h>
//#include <alg.h>
#include "circuit.h"
#include "GetLongOpt.h"
using namespace std;

extern GetLongOpt option;

void CIRCUIT::FanoutList()
{
    unsigned i = 0, j;
    GATE* gptr;
    for (;i < No_Gate();i++) {
        gptr = Gate(i);
        for (j = 0;j < gptr->No_Fanin();j++) {
            gptr->Fanin(j)->AddOutput_list(gptr);
        }
    }
}

void CIRCUIT::Levelize()
{
    list<GATE*> Queue;
    GATE* gptr;
    GATE* out;
    unsigned j = 0;
    for (unsigned i = 0;i < No_PI();i++) {
        gptr = PIGate(i);
        gptr->SetLevel(0);
        for (j = 0;j < gptr->No_Fanout();j++) {
            out = gptr->Fanout(j);
            if (out->GetFunction() != G_PPI) {
                out->IncCount();
                if (out->GetCount() == out->No_Fanin()) {
                    out->SetLevel(1);
                    Queue.push_back(out);
                }
            }
        }
    }
    for (unsigned i = 0;i < No_PPI();i++) {
        gptr = PPIGate(i);
        gptr->SetLevel(0);
        for (j = 0;j < gptr->No_Fanout();j++) {
            out = gptr->Fanout(j);
            if (out->GetFunction() != G_PPI) {
                out->IncCount();
                if (out->GetCount() ==
                        out->No_Fanin()) {
                    out->SetLevel(1);
                    Queue.push_back(out);
                }
            }
        }
    }
    int l1, l2;
    while (!Queue.empty()) {
        gptr = Queue.front();
        Queue.pop_front();
        l2 = gptr->GetLevel();
        for (j = 0;j < gptr->No_Fanout();j++) {
            out = gptr->Fanout(j);
            if (out->GetFunction() != G_PPI) {
                l1 = out->GetLevel();
                if (l1 <= l2)
                    out->SetLevel(l2 + 1);
                out->IncCount();
                if (out->GetCount() ==
                        out->No_Fanin()) {
                    Queue.push_back(out);
                }
            }
        }
    }
    for (unsigned i = 0;i < No_Gate();i++) {
        Gate(i)->ResetCount();
    }
}

void CIRCUIT::Check_Levelization()
{

    GATE* gptr;
    GATE* in;
    unsigned i, j;
    for (i = 0;i < No_Gate();i++) {
        gptr = Gate(i);
        if (gptr->GetFunction() == G_PI) {
            if (gptr->GetLevel() != 0) {
                cout << "Wrong Level for PI : " <<
                gptr->GetName() << endl;
                exit( -1);
            }
        }
        else if (gptr->GetFunction() == G_PPI) {
            if (gptr->GetLevel() != 0) {
                cout << "Wrong Level for PPI : " <<
                gptr->GetName() << endl;
                exit( -1);
            }
        }
        else {
            for (j = 0;j < gptr->No_Fanin();j++) {
                in = gptr->Fanin(j);
                if (in->GetLevel() >= gptr->GetLevel()) {
                    cout << "Wrong Level for: " <<
                    gptr->GetName() << '\t' <<
                    gptr->GetID() << '\t' <<
                    gptr->GetLevel() <<
                    " with fanin " <<
                    in->GetName() << '\t' <<
                    in->GetID() << '\t' <<
                    in->GetLevel() <<
                    endl;
                }
            }
        }
    }
}

void CIRCUIT::SetMaxLevel()
{
    for (unsigned i = 0;i < No_Gate();i++) {
        if (Gate(i)->GetLevel() > MaxLevel) {
            MaxLevel = Gate(i)->GetLevel();
        }
    }
}

//Setup the Gate ID and Inversion
//Setup the list of PI PPI PO PPO
void CIRCUIT::SetupIO_ID()
{
    unsigned i = 0;
    GATE* gptr;
    vector<GATE*>::iterator Circuit_ite = Netlist.begin();
    for (; Circuit_ite != Netlist.end();Circuit_ite++, i++) {
        gptr = (*Circuit_ite);
        gptr->SetID(i);
        switch (gptr->GetFunction()) {
            case G_PI: PIlist.push_back(gptr);
                break;
            case G_PO: POlist.push_back(gptr);
                break;
            case G_PPI: PPIlist.push_back(gptr);
                break;
            case G_PPO: PPOlist.push_back(gptr);
                break;
            case G_NOT: gptr->SetInversion();
                break;
            case G_NAND: gptr->SetInversion();
                break;
            case G_NOR: gptr->SetInversion();
                break;
            default:
                break;
        }
    }
}

void CIRCUIT::GetGate() {
    
    int total_gate = 0;
    vector<int> gate_num(5, 0); // {NOT, OR, NOR, AND, NAND}

    for(auto gate : Netlist) {
        total_gate ++;
        // cout << g->GetFunction() << endl;
        switch (gate->GetFunction()) {
            case G_NOT : 
                gate_num[0] ++;
                break;

            case G_OR  : 
                gate_num[1] ++;
                break;

            case G_NOR : 
                gate_num[2] ++;
                break;

            case G_AND : 
                gate_num[3] ++;
                break;

            case G_NAND: 
                gate_num[4] ++;
                break;

            default: 
                total_gate --;
                break;
        }
    }

    cout << "    # of input : " << No_PI() << endl;
    cout << "    # of output: " << No_PO() << endl; 
    cout << "--- Info of Gate " << endl;
    cout << "    Total # of gate: " << total_gate << endl;
    cout << "    # of NOT : " << gate_num[0] << endl;
    cout << "    # of OR  : " << gate_num[1] << endl;
    cout << "    # of NOR : " << gate_num[2] << endl;
    cout << "    # of AND : " << gate_num[3] << endl;
    cout << "    # of NAND: " << gate_num[4] << endl; 
    if(No_PPI() == No_PPO()) cout << "    # of FF  : " << No_PPO() << endl;
    else                     cout << "    Mismatch of PPI & PPO" << endl;

}

void CIRCUIT::GetNet() {

    int total_net  = 0;
    int branch_net = 0;
    int stem_net   = 0;
    float fanout_sum = 0;

    for(auto gate : Netlist) {

        if(gate->No_Fanout() > 0) total_net ++;

        if(gate->No_Fanout() > 1) {
            total_net += gate->No_Fanout();
            branch_net += gate->No_Fanout();
            stem_net ++;
        }

        fanout_sum += gate->No_Fanout();
    }

 
    cout << "--- Info of Net" << endl;
    cout << "    Total # of net: " << total_net << endl;
    cout << "    # of branch net: " << branch_net << endl;
    cout << "    # of stem net: " << stem_net << endl; 
    cout << "    Average fanout: " << float(fanout_sum / No_Gate()) << endl;

}

// void  CIRCUIT::Topological_sort(int i) {

//     visit[i] = true;
//     for(auto n : Netlist[i]->GetOutput_list()) {
//         if(!visit[n->GetID()]) Topological_sort(n->GetID());
//     }
//     topOrder.push_back(Netlist[i]);

// }

// void CIRCUIT::GetPath(string start_str, string end_str) {

//     for(auto g : Netlist) {
//         if(g->GetName() == start_str) start = g;
//         if(g->GetName() == end_str)   end = g;
//     }

//     if(!start || !end) {
//         cout << "PI or PO not found" << endl;
//         return;
//     }

//     // Topological Sort
//     visit.resize(No_Gate(), false);

//     for(int i = 0; i < No_Gate(); i++) 
//         if(!visit[i]) Topological_sort(i);
   
//     // DP Path finding
//     unordered_map<GATE*, vector<vector<string>>> DPMap;

//     DPMap[end] = {{ end->GetName() }};

//     while(!topOrder.empty()) {
        
//         GATE* gate = topOrder.front();
//         topOrder.pop_front();

//         if(DPMap.find(gate) == DPMap.end()) {

//             vector<vector<string>> path; // store all path to end within a node
//             for(auto nxt : gate->GetOutput_list()) {
//                 for(auto nxt_path : DPMap[nxt]) {
//                     vector<string> new_path = { gate->GetName() };
//                     new_path.insert(new_path.end(), nxt_path.begin(), nxt_path.end()); // insert new node before current branch 
//                     path.push_back(new_path);
//                 }
//             }

//             if(!path.empty()) DPMap[gate] = path; // store all path of one node into map

//         }
    
//     } 

//     int path_num = DPMap[start].size();

//     for(int i = 0; i < path_num; i++) {
//         for(auto& q : DPMap[start][i]) {
//             cout << q << " ";
//         }cout << endl;
//     }

//     cout << "The paths from " << start->GetName() << " to " << end->GetName() << ": " << path_num << endl;

// }

void CIRCUIT::DFS(GATE *g) {

    int g_ID = g->GetID();
    visit[g_ID] = true;
    path.push_back(g->GetName());

    if(g == end) {
        path_num ++;
        for(auto str : path) cout << str << " ";
        cout << '\n';
    }
    else {
        for(auto nxt_g : g->GetOutput_list()) {
            if(g->GetLevel() >= end->GetLevel()) continue;
            if(!visit[nxt_g->GetID()]) 
                DFS(nxt_g);
        }
    }

    path.erase(path.end());
    visit[g_ID] = false;

}

void CIRCUIT::GetPath(string start_str, string end_str) {

    // Find start & end node
    for(auto g : Netlist) {
        if(g->GetName() == start_str) start = g;
        if(g->GetName() == end_str)   end = g;
    }

    if(!start || !end) {
        cout << "PI or PO not found" << endl;
        return;
    }

    // start iterate DFS
    path_num = 0;
    visit.resize(No_Gate(), false);
    DFS(start);

    cout << "The paths from " << start->GetName() << " to " << end->GetName() << ": " << path_num << endl;

}

