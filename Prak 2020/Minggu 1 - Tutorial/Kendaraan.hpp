#ifndef __KENDARAAN__HPP__
#define __KENDARAAN__HPP__

#include <iostream>
using namespace std;
class Kendaraan{
    private:
        int nomor;
        int tahun;
        string merk;
        string kategori;
    public:
        Kendaraan();
        Kendaraan(int nomor, int tahun, string merk, string kategori);
        void printInfo();
        int biayaSewa(int lamaSewa);
};

#endif



