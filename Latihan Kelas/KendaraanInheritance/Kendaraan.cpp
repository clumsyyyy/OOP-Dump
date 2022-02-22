#include "Kendaraan.hpp"
#include <iostream>
using namespace std;

//default constructor
Kendaraan::Kendaraan(){ 
    this->nomor = 0;
    this->tahun = 0;
    this->merk = "XXX";
}

//user defined constructor
Kendaraan::Kendaraan(int nomor, int tahun, string merk){
    this->nomor = nomor;
    this->tahun = tahun;
    this->merk = merk;
}

//mencetak semua informasi yang dimiliki oleh kendaraan
void Kendaraan::printInfo(){
    cout << "Nomor: " << this->nomor << endl;
    cout << "Tahun: " << this->tahun << endl;
    cout << "Merk: " << this->merk << endl;
}
