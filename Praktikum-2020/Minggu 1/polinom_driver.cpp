#include "polinom.cpp"
#include <iostream>
using namespace std;

int main(){
    Polinom P(2);
    P.input();
    P.print();
    Polinom P1(P);
    P1.derive().print();
    cout << P1.derive().substitute(2) << endl;
}

