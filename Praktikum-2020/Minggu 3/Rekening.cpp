#include "Rekening.hpp"

Rekening::Rekening(double d){
    this->saldo = d;
}

void Rekening::setSaldo(double d){
    this->saldo = d;
}

double Rekening::getSaldo() const{
    return this->saldo;
}

void Rekening::simpanUang(double d){
    this->saldo += d;
}

bool Rekening::tarikUang(double d){
    return (this->saldo >= d);
}