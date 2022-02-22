#include "RekeningTabungan.hpp"

RekeningTabungan::RekeningTabungan(double saldo, double transaksi) :
    Rekening(saldo){
        this->biayaTransaksi = (transaksi < 0.0 ? 0.0 : transaksi);
    }

void RekeningTabungan::setBiayaTransaksi(double transaksi){
    this->biayaTransaksi = (transaksi < 0.0 ? 0.0 : transaksi);
}

double RekeningTabungan::getBiayaTransaksi() const{
    return this->biayaTransaksi;
}

void RekeningTabungan::simpanUang(double saldo){
    Rekening::simpanUang(saldo - biayaTransaksi);
}

bool RekeningTabungan::tarikUang(double saldo){
    if (Rekening::getSaldo() < saldo){
        return false;
    } else {
        saldo += this->biayaTransaksi;
        Rekening::setSaldo(Rekening::getSaldo() - saldo);
        return true;
    }
}