#include "Kendaraan.hpp"
#include <iostream>
using namespace std;
//default constructor
Kendaraan::Kendaraan(){ 
    this->nomor = 0;
    this->tahun = 0;
    this->merk = 'XXX';
    this->kategori = 'mobil';
}

//user defined constructor
Kendaraan::Kendaraan(int nomor, int tahun, string merk, string kategori){
    this->nomor = nomor;
    this->tahun = tahun;
    this->merk = merk;
    this->kategori = kategori;
}

//mencetak semua informasi yang dimiliki oleh kendaraan
void Kendaraan::printInfo(){
    cout << "Nomor: " << this->nomor << endl;
    cout << "Tahun: " << this->tahun << endl;
    cout << "Merk: " << this->merk << endl;
    cout << "Kategori: " << this->kategori << endl;
}


// menghitung dan 
// menghasilkan biaya peminjaman dengan kebijakan yang 
// berbeda tergantung jenis kendaraan
int Kendaraan::biayaSewa(int lamaSewa){
    if (this->kategori == "bus"){
        return lamaSewa * 1000000;
    } else if (this->kategori == "minibus"){
        if (lamaSewa <= 5){
            return 5000000;
        } else {
            return 5000000 + (lamaSewa - 5) * 500000;
        }
    } else if (this->kategori == "mobil"){
        return lamaSewa * 500000;
    }
}

