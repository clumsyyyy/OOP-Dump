#include "Minibus.hpp"
// CONSTRUCTOR KELAS CHILD
// Default constructor untuk subclass Minibus
Minibus::Minibus() : Kendaraan(){}
// User defined constructor untuk subclass Minibus
Minibus::Minibus(int nomor, int tahun, string merk) : Kendaraan(nomor, tahun, merk){}

void Minibus::printInfo(){
    Kendaraan::printInfo();
    cout << "Kategori: Minibus" << endl;
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