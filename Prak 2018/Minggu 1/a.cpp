#include "A.hpp"
using namespace std;

//constructor
A::A(char d){
    data = d;
    cout << "cons " << d << endl;
}

//copy constructor
A::A(const A &other){
    data = other.data;
    cout << "ccons " << data << endl;
}

//destructor
A::~A(){
    cout << "dest " << data << endl;
}

//assignment
A& A::operator = (const A& other){
    cout << "cassign " << data << " = " << other.data << endl;
    data = other.data;
    return *this;
}

void A::show(){
    cout << "show " << data << endl;
}