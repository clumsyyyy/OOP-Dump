#include "complex.hpp"
#include <iostream>
using namespace std;
//ctor biasa
Complex::Complex() {
    this->real = 0;
    this->imaginer = 0;
}

//ctor dengan argumen
Complex::Complex(int re, int im){
    this->real = re;
    this->imaginer = im;
}

//copy constructor dgn pointer
Complex::Complex(const Complex &comp){
    this->real = comp.real;
    this->imaginer = comp.imaginer;
}

//dtor
Complex::~Complex(){

}

//getter function
int Complex::getReal(){
    return this->real;
}

int Complex::getImaginer(){
    return this->imaginer;
}

//setter function
void Complex::setReal(int re){
    this->real = re;
}

void Complex::setImaginer(int im){
    this->imaginer = im;
}

void Complex::display(){
    cout << this->real << (this->imaginer > 0 ? '+' : '-') << (this->imaginer > 0 ? this->imaginer : this->imaginer * - 1) << 'i' << endl;
}
Complex Complex::operator + (Complex const &comp){
    Complex C((this->real + comp.real), (this->imaginer + comp.imaginer));
    return C;
}

Complex Complex::operator - (Complex const &comp){
    Complex C((this->real - comp.real), (this->imaginer - comp.imaginer));
    return C;
}

Complex Complex::operator * (Complex const &comp){
    int re, im;
    re = (this->real * comp.real) - (this->imaginer * comp.imaginer);
    im = (this->real * comp.imaginer) + (this->imaginer * comp.real);
    Complex C(re, im);
    return C;
}
