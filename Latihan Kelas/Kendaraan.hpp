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
        void printInfo();
};

class Mobil : public Kendaraan{
    private:
        string supir;
    public:
        Mobil();
        Mobil(int nomor, int tahun, string merk, string supir);
        int biayaSewa(int lamaSewa);
        void printInfo();
};

class Minibus : public Kendaraan{
    public:
        Minibus();
        Minibus(int nomor, int tahun, string merk);
        int diskon(int lamaSewa);
        int biayaSewa(int lamaSewa);
        void printInfo();
};

class Bus : public Kendaraan{
    private:
        int kapasitas;
    public:
        Bus();
        Bus(int nomor, int tahun, string merk, int kapasitas);
        int biayaSewa(int lamaSewa);
        void printInfo();
};

#endif
