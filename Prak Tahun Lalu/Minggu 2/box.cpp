#include "box.hpp"
#include <iostream>
using namespace std;

Box::Box(){
    this->id = 0;
    cout << "new empty box with default id " << id << endl;
}

Box::Box(int id){
    this->id = id;
    cout << "new empty box " << this->id << endl;
}

Box::Box(const Box &b){
    this->id = b.id;
    cout << "copy box " << this->id << endl;
}

Box& Box::operator = (const Box& box){
    cout << "assign box " << this->id << "<-" << box.id << endl;
    this->id = box.id;
    return *this;
}

Box::~Box(){
    cout << "destroy box " << id << endl;
}

void Box::peek(){
    cout << "box " << id << endl;
}