#ifndef __KENDARAAN__HPP__
#define __KENDARAAN__HPP__

#include <iostream>
using namespace std;
class Kendaraan{
    protected:
        int nomor;
        int tahun;
        string merk;
    public:
        Kendaraan();
        Kendaraan(int nomor, int tahun, string merk);
        Kendaraan(const Kendaraan& a);
        virtual void printInfo();
};

#endif
