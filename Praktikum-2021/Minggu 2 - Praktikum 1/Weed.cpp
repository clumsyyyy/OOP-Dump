#include "Weed.hpp"
#include <iostream>
using namespace std;

/*
    NIM: 13520124
    Nama: Owen Christian Wijaya
    Topik: Praktikum OOP 1
    Deskripsi: Implementasi header file Weed.hpp
*/

Weed::Weed(){
    this->many = 1;
}

Weed::Weed(int n){
    if (n >= 1 && n <= 1000){
        this->many = n;
    }
}

Weed::Weed(const Weed &b){
    this->many = b.many;
}

Weed::~Weed(){

}

void Weed::step(){
    for(int i = 0; i < this->many; i++){
        cout << "kresek...";
    }
    cout << endl;
}