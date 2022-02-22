#include "RekeningGiro.hpp"
#include <iostream>
using namespace std;

RekeningGiro::RekeningGiro(double saldo, double sukuBunga)
    : Rekening(saldo){
        if (sukuBunga < 0.0){
            this->sukuBunga = 0.0;
        } else {
            this->sukuBunga = sukuBunga;
        }
    }

void RekeningGiro::setSukuBunga(double sb){
    this->sukuBunga = sb;
}

double RekeningGiro::getSukuBunga() const{
    return this->sukuBunga;
}

double RekeningGiro::hitungBunga(){
    // cara memanggil fungsi dari class parent
    return Rekening::getSaldo() * this->sukuBunga;
}