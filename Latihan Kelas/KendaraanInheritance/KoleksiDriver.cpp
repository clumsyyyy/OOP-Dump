#include "Kendaraan.cpp"
#include "Mobil.cpp"
#include "Minibus.cpp"
#include "Bus.cpp"
#include "KoleksiKendaraan.cpp"
#include <iostream>


int main(){
    KoleksiKendaraan* k = new KoleksiKendaraan();
    Mobil* m1 = new Mobil(1, 2000, "Toyota", "Owen");
    m1->printInfo();
    *k << *m1;
    k->printAll();

    // KoleksiKendaraan k;
    // k << Mobil(1, 2000, "Toyota", "Owen");
    // k << Bus(2, 2001, "Honda", 10);
    // k << Minibus(3, 2002, "Honda");
    // k.printAll();
}