#include "Mobil.hpp"

// CONSTRUCTOR KELAS CHILD

// Default constructor untuk subclass Mobil
Mobil::Mobil() : Kendaraan(){
    this->supir = "XXX";
}

// User defined constructor untuk subclass Mobil
Mobil::Mobil(int nomor, int tahun, string merk, string supir) : Kendaraan(nomor, tahun, merk){
    this->supir = supir;
}

void Mobil::printInfo(){
    Kendaraan::printInfo();
    cout << "Kategori: Mobil" << endl;
    cout << "Supir: " << this->supir << endl;
}

int Mobil::biayaSewa(int lamaSewa){
    return lamaSewa * 50000;
}