#include <iostream>
#include "Triplet.hpp"
using namespace std;

int main(){
    Triplet<int, int, int> a(3, 2, -5);
cout << a.getFirst() << endl;
cout << a.getSecond() << endl;
cout << a.getThird() << endl;

}