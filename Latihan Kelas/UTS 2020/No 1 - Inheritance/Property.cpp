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

// copy constructor
Property::Property(const Property& p){
    this->name = p.name;
    this->openYear = p.openYear;
    this->type = p.type;
}

// destructor
Property::~Property(){

}

void Property::set_name(string name){
    this->name = name;
}

const string Property::get_name(){
    return this->name;
}

void Property::set_type(string type){
    this->type = type;
}

const string Property::get_type(){
    return this->type;
}

int Property::get_age(){
    return CURRENT_YEAR - this->openYear;
}

void Property::displayInfo(){
    cout << "Nama: " << this->name << endl;
    cout << "Tipe: " << this->type << endl;
    cout << "Umur: " << this->get_age() << endl;
    cout << "Rate: " << this->rate() << endl;
}

float Property::rate(){
    return this->get_age() * 50; //asumsinya gitu
}