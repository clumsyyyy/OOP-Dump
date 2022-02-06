#include "complex.cpp"
#include <iostream>
using namespace std;

int main(){
    Complex C(2, 2);
    Complex C1(2, 3);
    (C * C1).display();
}