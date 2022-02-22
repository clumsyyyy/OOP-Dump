#include "Bus.hpp"
// CONSTRUCTOR KELAS CHILD
// Default constructor untuk subclass Bus
Bus::Bus() : Kendaraan(){
    this->kapasitas = 0;
}

// User defined constructor untuk subclass Bus
Bus::Bus(int nomor, int tahun, string merk, int kapasitas) : Kendaraan(nomor, tahun, merk){
    this->kapasitas = kapasitas;
}

void Bus::printInfo(){
    Kendaraan::printInfo();
    cout << "Kategori: Bus" << endl;
}

int Bus::biayaSewa(int lamaSewa){
    return lamaSewa * 100000;
}