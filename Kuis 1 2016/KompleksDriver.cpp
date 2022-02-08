#include "Kompleks.cpp"
#include <iostream>
using namespace std;

int main(){
    Kompleks *K1 = new Kompleks(1, 2);
    K1->display();
    Kompleks *K2 = new Kompleks(3, 4);
    K2->display();
    Kompleks *K3 = K1;
    K3->display();
    (*K1 + *K2).display();
}