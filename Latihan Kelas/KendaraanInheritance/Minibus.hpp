#ifndef __MINIBUS__HPP__
#define __MINIBUS__HPP__
#include "Kendaraan.hpp"

class Minibus : public Kendaraan{
    public:
        Minibus();
        Minibus(int nomor, int tahun, string merk);
        int diskon(int lamaSewa);
        int biayaSewa(int lamaSewa);
        void printInfo();
};

#endif