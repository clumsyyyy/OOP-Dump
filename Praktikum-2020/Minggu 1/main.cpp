#include "a.cpp"
#include <iostream>
using namespace std;

// int main(){
//     A A1('1');
//     A A2('2');
//     A A3(A1);
//     A3 = A2;
//     A2.show();
//     return 0;
// }

int main(){
    A *A1 = new A('1');
    A *A2 = new A('2');
    A *A3 = new A(*A1);
    *A3 = *A2;
    A2->show();
    delete A2;
    delete A3;
    delete A1;
    return 0;
}
