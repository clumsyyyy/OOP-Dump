#include "Kompleks.hpp"
#include <iostream>
using namespace std;

Kompleks::Kompleks(){
    this->real = 0;
    this->imaginer = 0;
}

Kompleks::Kompleks(int real, int imaginer){
    this->real = real;
    this->imaginer = imaginer;
}

Kompleks::Kompleks(const Kompleks& K){
    this->real = K.real;
    this->imaginer = K.imaginer;
}

Kompleks::~Kompleks(){

}

Kompleks Kompleks::operator = (Kompleks const& K){
    return Kompleks(K.real, K.imaginer);
}

Kompleks Kompleks::operator + (Kompleks const& K){
    return Kompleks(this->real + K.real, this->imaginer + K.imaginer);
}

Kompleks Kompleks::operator - (Kompleks const& K){
    return Kompleks(this->real - K.real, this->imaginer - K.imaginer);
}

Kompleks Kompleks::operator * (Kompleks const& k){
    int real = (this->real * k.real) - (this->imaginer * k.imaginer);
    int imaginer = (this->real * k.imaginer) + (this->imaginer * k.real);
    return Kompleks(real, imaginer);
}

void Kompleks::display(){
    cout << this->real << " " << (this->imaginer > 0 ? '+' : '-') << " " << (this->imaginer > 0 ? this->imaginer : this->imaginer * - 1) << "i" << endl;
}