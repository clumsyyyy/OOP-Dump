#include "Expression.cpp"
#include "AddExpression.cpp"
#include "SubstractExpression.cpp"
#include "NegativeExpression.cpp"
#include <iostream>
using namespace std;

int main(){
    AddExpression* e = new AddExpression(new TerminalExpression(4),
    new TerminalExpression(6));
    cout << e->solve() << endl;

    SubstractExpression* e2 = new SubstractExpression(new TerminalExpression(4),
    new TerminalExpression(6));
    cout << e2->solve() << endl;

    NegativeExpression* e3 = new NegativeExpression(new TerminalExpression(1));
    cout << e3->solve() << endl;
}