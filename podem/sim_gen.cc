#include <bits/stdc++.h>
#include "circuit.h"

#define F first 
#define S second

using namespace std;

std::string getFileName(const std::string& filePath) {
    size_t lastSlashPos = filePath.find_last_of("/\\");
    std::string fileName = filePath.substr(lastSlashPos + 1);
    size_t lastDotPos = fileName.find_last_of('.');
    if (lastDotPos != std::string::npos) {
        fileName = fileName.substr(0, lastDotPos);
    }
    return fileName;
}


// functions defined in header file

void CIRCUIT::SimulatorGenerate(string simulator, string file) {

    string input_name = getFileName(file); 

    ofstream outfile(simulator);
    outfile << "#include <iostream>" << endl;
    outfile << "#include <ctime>" << endl;
    outfile << "#include <bitset>" << endl;
    outfile << "#include <string>" << endl;
    outfile << "#include <fstream>" << endl << endl;

    outfile << "using namespace std;" << endl;
    outfile << "const unsigned PatternNum = 16;" << endl << endl;

    outfile << "void evaluate();" << endl;
    outfile << "void printIO(unsigned idx);" << endl << endl;

    // print bitset
    for(auto g : Netlist) {
        outfile << "bitset<PatternNum> " << "G_" << g->GetName() << "[2];" << endl; 
    }
    
    outfile << "bitset<PatternNum> temp;" << endl;
    outfile << "ofstream fout(\"" << input_name << ".out\", ios::out);" << endl << endl;

    outfile << "int main()" << endl;
    outfile << "{" << endl;
    outfile << "clock_t time_init, time_end;" << endl;
    outfile << "time_init = clock();" << endl << endl;
    
    // Read from pattern
    unsigned pattern_num(0);
    unsigned pattern_idx(0);
    while(!Pattern.eof()){ 
        // cout << PatternNum << endl;
	    for(pattern_idx=0; pattern_idx < PatternNum; pattern_idx++){
	        if(!Pattern.eof()){ 
	            ++pattern_num;
	            Pattern.ReadNextPattern(pattern_idx);
	        }
	        else break;
	    }
        for (auto g : PIlist) {
            outfile << "G_" << g->GetName() << "[0] = " << static_cast<int>((g->GetWireValue(0)).to_ulong()) << " ;" << endl;
            outfile << "G_" << g->GetName() << "[1] = " << static_cast<int>((g->GetWireValue(1)).to_ulong()) << " ;" << endl;
        }
        outfile << endl;
        outfile << "evaluate();" << endl;
        outfile << "printIO(" << pattern_idx << ");" << endl << endl;

    }

    outfile << "time_end = clock();" << endl;
    outfile << "cout << \"Total CPU Time = \" << double(time_end - time_init)/CLOCKS_PER_SEC << endl;" << endl;
    outfile << "system(\"ps aux | grep a.out \");" << endl;
    outfile << "return 0;" << endl;
    outfile << "}" << endl << endl;

    outfile << "void evaluate()" << endl;
    outfile << "{" << endl;

    for (auto g : Netlist) ScheduleFanout(g);

    for (unsigned i = 0; i <= MaxLevel; i++) {
        while (!Queue[i].empty()) {
        
            GATE* g = Queue[i].front();
            Queue[i].pop_front();

            GATEFUNC func = g->GetFunction();
            
            switch(func) {
                case G_NOT:
                    outfile << "G_" << g->GetName() << "[0] = G_" << g->Fanin(0)->GetName() << "[0] ;" << endl;
                    outfile << "G_" << g->GetName() << "[1] = G_" << g->Fanin(0)->GetName() << "[1] ;" << endl;
                    break;
                case G_AND:
                case G_NAND:
                    outfile << "G_" << g->GetName() << "[0] = " << "G_" << g->Fanin(0)->GetName() << "[0] ;" << endl;
                    outfile << "G_" << g->GetName() << "[1] = " << "G_" << g->Fanin(0)->GetName() << "[1] ;" << endl;
                    for(unsigned j = 1 ; j < g -> No_Fanin() ; ++j){
                        outfile << "G_" << g->GetName() << "[0] &= G_" << g->Fanin(j)->GetName() << "[0] ;" << endl;
                        outfile << "G_" << g->GetName() << "[1] &= G_" << g->Fanin(j)->GetName() << "[1] ;" << endl;
                    }
                    break;
                case G_OR:
                case G_NOR:
                    outfile << "G_" << g->GetName() << "[0] = " << "G_" << g->Fanin(0)->GetName() << "[0] ;" << endl;
                    outfile << "G_" << g->GetName() << "[1] = " << "G_" << g->Fanin(0)->GetName() << "[1] ;" << endl;
                    for(unsigned j = 1 ; j < g -> No_Fanin() ; ++j){
                        outfile << "G_" << g->GetName() << "[0] |= G_" << g->Fanin(j)->GetName() << "[0] ;" << endl;
                        outfile << "G_" << g->GetName() << "[1] |= G_" << g->Fanin(j)->GetName() << "[1] ;" << endl;
                    }
                    break;
                default: break;
            }

            if (g->Is_Inversion()) {
                outfile << "temp = G_" << g->GetName() << "[0] ;" << endl; 
                outfile << "G_" << g->GetName() << "[0] = ~G_" << g->GetName() << "[1] ;" << endl;
                outfile << "G_" << g->GetName() << "[1] = ~temp ;" << endl;
            }

        }
    }

    for (auto po : POlist) {
        outfile << "G_" << po->GetName() << "[0] = G_" << po->Fanin(0)->GetName() << "[0] ;" << endl;
        outfile << "G_" << po->GetName() << "[1] = G_" << po->Fanin(0)->GetName() << "[1] ;" << endl;
    }
    outfile << "}" << endl << endl;

    outfile << "void printIO(unsigned idx)" << endl;
    outfile << "{" << endl;
    outfile << "for (unsigned j=0; j<idx; j++)" << endl;
    outfile << "{" << endl;
    for(auto g : PIlist) {
        outfile << "if(G_" << g->GetName() <<"[0][j]==0)" << endl;
        outfile << "{" << endl;
        outfile << "    if(G_" << g->GetName() <<"[1][j]==1)" << endl;
        outfile << "        fout<<\"F\";" << endl;
        outfile << "    else" << endl;
        outfile << "        fout<<\"0\";" << endl;
        outfile << "}" << endl;
        outfile << "else" << endl;
        outfile << "{" << endl;
        outfile << "    if(G_" << g->GetName() <<"[1][j]==1)" << endl;
        outfile << "        fout<<\"1\";" << endl;
        outfile << "    else" << endl;
        outfile << "        fout<<\"2\";" << endl;
        outfile << "}" << endl;
    }

    outfile << "fout<<\" \";" << endl;

    for(auto g : POlist) {
        outfile << "if(G_" << g->GetName() <<"[0][j]==0)" << endl;
        outfile << "{" << endl;
        outfile << "    if(G_" << g->GetName() <<"[1][j]==1)" << endl;
        outfile << "        fout<<\"F\";" << endl;
        outfile << "    else" << endl;
        outfile << "        fout<<\"0\";" << endl;
        outfile << "}" << endl;
        outfile << "else" << endl;
        outfile << "{" << endl;
        outfile << "    if(G_" << g->GetName() <<"[1][j]==1)" << endl;
        outfile << "        fout<<\"1\";" << endl;
        outfile << "    else" << endl;
        outfile << "        fout<<\"2\";" << endl;
        outfile << "}" << endl;
    }
    outfile << "fout<<endl;" << endl;
    outfile << "}" << endl;
    outfile << "}" << endl;

}