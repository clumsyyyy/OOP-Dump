#ifndef __MOBIL__HPP__
#define __MOBIL__HPP__
#include "Kendaraan.hpp"

class Mobil : public Kendaraan{
    private:
        string supir;
    public:
        Mobil();
        Mobil(int nomor, int tahun, string merk, string supir);
        int biayaSewa(int lamaSewa);
        void printInfo();
};

#endif