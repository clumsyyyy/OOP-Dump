#include "WarungSaltedEgg.hpp"

/*
    NIM: 13520124
    Nama: Owen Christian Wijaya
    Implementasi file header WarungSaltedEgg.hpp
*/

WarungSaltedEgg::WarungSaltedEgg(int uang, int nasi, int telur, int telurAsin, int ayam):
    WarungNasi(uang, nasi, telur){
        this->telurAsin = telurAsin;
        this->ayam = ayam;
    }

bool WarungSaltedEgg::masak(int pesanan){
    if (WarungNasi::getNasi() >= 1 
    && WarungNasi::getTelur() >= 1
    && this->telurAsin >= 3
    && this->ayam >= 1){
        int pendapatan = pesanan * 30000;
        WarungNasi::setUang(WarungNasi::getUang() + pendapatan);
        return true;
    } else {
        return false;
    }
}