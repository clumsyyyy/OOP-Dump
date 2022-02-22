#include <iostream>
#include "Kendaraan.hpp"

class KoleksiKendaraan {
    private:
        int nEff;
        int size;
        Kendaraan** arr;
    public:
        KoleksiKendaraan(): nEff(0), size(100), arr(new Kendaraan*[size]) {};
        KoleksiKendaraan(int size): nEff(0), size(size), arr(new Kendaraan*[size]) {};
        KoleksiKendaraan(const KoleksiKendaraan& k) {
            nEff = k.nEff;
            for (int i = 0; i < nEff; i++) {
                arr[i] = k.arr[i];
            }
        }
        ~KoleksiKendaraan() {
            delete[] arr;
        }
        
        void printAll() {
            for (int i = 0; i < nEff; i++) {
                arr[i]->printInfo();
                cout << endl;
            }
        }
 
        KoleksiKendaraan& operator<<(Kendaraan* a) {
            if (nEff + 1 < size){
                arr[nEff] = a;
                nEff++;
            }
            return *this;
        }
        KoleksiKendaraan& operator<<(KoleksiKendaraan a) {
            if (nEff + a.nEff < size){
                for (int i = 0; i < a.nEff; i++) {
                    arr[nEff] = a.arr[i];
                    nEff++;
                }
            } else {
                for (int i = 0; i < size - nEff; i++){
                    arr[nEff] = a.arr[i];
                    nEff++;
                }
            }
            return *this;
        }
};