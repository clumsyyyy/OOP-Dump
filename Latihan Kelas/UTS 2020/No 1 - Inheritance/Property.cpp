#include "Property.h"
#include <iostream>
using namespace std;

// Soal 1A. lengkapi header property

// constructor default
Property::Property(){
    this->name = "noname";
    this->openYear = 1900;
    this->type = "none";
}

// constructor user-defined
Property::Property(string name, int openYear, string type){
    this->name = name;
    this->openYear = openYear;
    this->type = type;
}

// // copy constructor
// Property::Property(const Property& p){
//     this->name = p.name;
//     this->openYear = p.openYear;
//     this->type = p.type;
// }

// // destructor
// Property::~Property(){

// }
// class string sudah ada handler cctor dan dtor sehingga
// gaperlu

void Property::set_name(string name){
    this->name = name;
}

string Property::get_name() const{
    return this->name;
}

void Property::set_type(string type){
    this->type = type;
}

string Property::get_type() const{
    return this->type;
}

int Property::get_age() const{
    return CURRENT_YEAR - this->openYear;
}

void Property::displayInfo() const{
    cout << "Nama: " << this->name << endl;
    cout << "Tipe: " << this->type << endl;
    cout << "Umur: " << this->get_age() << endl;
    cout << "Rate: " << this->rate() << endl;
}

float Property::rate() const{
    return this->get_age() * 50; //asumsinya gitu
}