#include "Hotel.h"
#include <iostream>
using namespace std;


Hotel::Hotel(){
    name = "noname";
    bintang = "none";
    openYear = 1900;
}

Hotel::Hotel(string name, string bintang, int openYear){
    this->name = name;
    this->bintang = bintang;
    this-> openYear = openYear;
}

void Hotel::set_name(string name){
    this->name = name;
}

string Hotel::get_name() const{
    return this->name;
}

void Hotel::set_bintang(string bintang){
    this->bintang = bintang;
}

string Hotel::get_bintang() const{
    return this->bintang;
}

int Hotel::get_age() const{
    return CURRENT_YEAR - this->openYear;
}

void Hotel::displayInfo() const{
    cout << "Name: " << this->name << endl;
    cout << "Bintang: " << this->bintang << endl;
    cout << "Age: " << this->get_age() << endl;
    cout << "Rate: " << this->rate() << endl;
}

int Hotel::rate() const{
    // diasumsikan rate adalah usia dikali 10
    return this->get_age() * 10;
}

bintang_empat::bintang_empat() : Hotel(){
}

bintang_empat::bintang_empat(string name, int year) :
    Hotel(name, "4", year) {};

void bintang_empat::set_star(string star){
    this->bintang = star;
}

string bintang_empat::get_star() const{
    return this->bintang;
}

void bintang_empat::displayInfo() const{
    Hotel::displayInfo();
}

bintang_lima::bintang_lima() : Hotel(){
    this->facility = 0;
}

bintang_lima::bintang_lima(string name, int year, int facility):
    Hotel(name, "5", year){ this->facility = facility; }

void bintang_lima::set_facility(int facility){
    this->facility = facility;
}

int bintang_lima::get_facility() const{
    return this->facility;
}

int bintang_lima::calculateFacility() const{
    return this->facility * 100000;
}

void bintang_lima::displayInfo() const{
    Hotel::displayInfo();
    cout << "Fasilitas: " << this->facility << endl;
}