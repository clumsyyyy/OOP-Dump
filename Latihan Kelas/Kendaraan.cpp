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

// CONSTRUCTOR KELAS CHILD

// Default constructor untuk subclass Mobil
Mobil::Mobil() : Kendaraan(){
    this->supir = "XXX";
}

// User defined constructor untuk subclass Mobil
Mobil::Mobil(int nomor, int tahun, string merk, string supir) : Kendaraan(nomor, tahun, merk){
    this->supir = supir;
}

// Default constructor untuk subclass Minibus
Minibus::Minibus() : Kendaraan(){}


// User defined constructor untuk subclass Minibus
Minibus::Minibus(int nomor, int tahun, string merk) : Kendaraan(nomor, tahun, merk){}

// Default constructor untuk subclass Bus
Bus::Bus() : Kendaraan(){
    this->kapasitas = 0;
}

// User defined constructor untuk subclass Bus
Bus::Bus(int nomor, int tahun, string merk, int kapasitas) : Kendaraan(nomor, tahun, merk){
    this->kapasitas = kapasitas;
}


void Mobil::printInfo(){
    Kendaraan::printInfo();
    cout << "Kategori: Mobil" << endl;
    cout << "Supir: " << this->supir << endl;
}

void Minibus::printInfo(){
    Kendaraan::printInfo();
    cout << "Kategori: Minibus" << endl;
}

void Bus::printInfo(){
    Kendaraan::printInfo();
    cout << "Kategori: Bus" << endl;
}

int Mobil::biayaSewa(int lamaSewa){
    return lamaSewa * 50000;
}

int Minibus::diskon(int lamaSewa){
    return lamaSewa > 10 ? 0.9 : 1;
}

int Minibus::biayaSewa(int lamaSewa){
    if (lamaSewa <= 5){
        return lamaSewa * 50000;
    } else {
        return (5000000 + (lamaSewa - 5) * 500000) * diskon(lamaSewa);
    }
}

int Bus::biayaSewa(int lamaSewa){
    return lamaSewa * 100000;
}
