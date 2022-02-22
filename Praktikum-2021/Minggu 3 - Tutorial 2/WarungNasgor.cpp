#include "WarungNasgor.hpp"

/*
    NIM: 13520124
    Nama: Owen Christian Wijaya
    Implementasi file header WarungNasgor.hpp
*/

WarungNasgor::WarungNasgor(int uang, int nasi, int telur, int kecap) :
    WarungNasi(uang, nasi, telur){
        this->kecap = kecap;
    }

bool WarungNasgor::masak(int pesanan){
    if (WarungNasi::getNasi() >= 1 
    && WarungNasi::getTelur() >= 1 
    && this->kecap >= 1){
        int pendapatan = pesanan * 15000;
        WarungNasi::setUang(WarungNasi::getUang() + pendapatan);
        return true;
    } else {
        return false;
    }
}