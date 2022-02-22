#ifndef __BUS__HPP__
#define __BUS__HPP__
#include "Kendaraan.hpp"

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