#include <iostream>
#include "gate.h"
#include "circuit.h"
#include "ReadPattern.h"
#include "GetLongOpt.h"
#include <queue>
#include <ctime>
#include <string>

using namespace std;

//2968GAT_988b => 2968
//PO_2548GAT_840 => 2548
string splitBefore(const string str, const string& delimiter) {
    size_t pos = str.find(delimiter);
    if (pos != string::npos) {
        if(str.substr(0, 3)=="PO_")
            return str.substr(3, pos-3);
        else
            return str.substr(0, pos);
    }
    return str;
}


//Depth First Search algorithm
void CIRCUIT::path(const char *start, const char *ends)
{
    GATE* gptr;
    GATE* startptr = new GATE;
    GATE* endptr = new GATE;
    for (unsigned int i=0;i < No_Gate();i++)
    {
        gptr = Gate(i);
        if(gptr->GetName() == start)
            startptr = gptr;
        if(gptr->GetName() == ends)
            endptr = gptr;
        
    }

    vector<bool> visited(No_Gate(), false);

    string* path = new string[No_Gate()];
    int path_index = 0;
    int No_total_path = 0;

    printAllPaths(startptr, endptr, visited, path, path_index, No_total_path);
    cout<<"The paths from "<<startptr->GetName()<<" to "<<endptr->GetName()<<": "<<No_total_path<<endl;


}
void CIRCUIT::printAllPaths(GATE* u, GATE* d, vector<bool>visited,
 string path[], int& path_index, int &No_total_path)
{
    visited[u->GetID()] = true;
    path[path_index] = u->GetName();
    path_index++;

    if (u->GetName() == d->GetName())
    {
        No_total_path ++;
        for (int i = 0; i < path_index; i++)
            cout << path[i] << " ";
        cout << endl;
    }
    else
    {
        for(unsigned int j=0 ; j<u->No_Fanout() ; j++)
        {
            if(u->Fanout(j)->GetLevel() > d->GetLevel())
                continue;
            if(!visited[u->Fanout(j)->GetID()])
            {
//                for (int i = 0; i < path_index; i++)
//                    cout << path[i] << " ";
//                cout << endl;
                CIRCUIT::printAllPaths(u->Fanout(j), d, visited, path, path_index, No_total_path);
            }
        }

    }
    path_index--;
    visited[u->GetID()] = false;
}
