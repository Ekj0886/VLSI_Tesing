#ifndef BRIDGE_H
#define BRIDGE_H
#include "gate.h"

#define F first 
#define S second

using namespace std;

class BFAULT {

private:
    BVALUE Value;
    GATE* Input;
    GATE* Output; //record output gate for branch fault
    //if stem, Input = Output
    bool Branch; //fault is on branch
    unsigned EqvFaultNum; //equivalent fault number (includes itself)
    FAULT_STATUS Status;
    
public:
    BFAULT(GATE* gptr, GATE* ogptr, BVALUE value): Value(value), Input(gptr),
    Output(ogptr), Branch(false), EqvFaultNum(1), Status(UNKNOWN) {}
    ~BFAULT() {}
    BVALUE GetBValue() { return Value; }
    GATE* GetInputGate() { return Input; }
    GATE* GetOutputGate() { return Output; }
    void SetBranch(bool b) { Branch = b; }
    bool Is_Branch() { return Branch; }
    void SetEqvFaultNum(unsigned n) { EqvFaultNum = n; }
    void IncEqvFaultNum() { ++EqvFaultNum; }
    unsigned GetEqvFaultNum() { return EqvFaultNum; }
    void SetStatus(FAULT_STATUS status) { Status = status; }
    FAULT_STATUS GetStatus() { return Status; }
    
};

#endif