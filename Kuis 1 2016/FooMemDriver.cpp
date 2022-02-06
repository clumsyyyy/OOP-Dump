#include "FooMem.cpp"
#include <iostream>

int main(){
    FooMem *f = new FooMem(8);
    f->Add(1);
    f->Add(1);
    f->Add(4);
    f->Print();
    f->Add(3);
    f->Print();
    f->Add(2);
    f->Print();
    f->Del();
    f->Print();
    f->Add(8);
    f->Print();
}