#include "SepuluhLampu.cpp"
#include "Lampu.cpp"
#include <iostream>
using namespace std;


int main(){
    Sepuluh_Lampu sl;
    Lampu l1(1, true);
    Lampu l2(2, false);
    Lampu l3(3, true);
    Lampu l4(4, false);
    Lampu l5(5, true);
    Lampu l6(6, false);
    Lampu l7(7, true);
    Lampu l8(8, false);
    Lampu l9(9, true);
    Lampu l10(10, false);
    sl = sl + l1;
    sl = sl + l2;
    sl = sl + l3;
    sl = sl + l4;
    sl = sl + l5;
    sl = sl + l6;
    sl = sl + l7;
    sl = sl + l8;
    sl = sl + l9;
    sl = sl + l10;


    int mod = 0;
    int ident = 1;
    sl.PrintAll();
    while (ident){

        cout << "Masukkan kelipatan lampu yang ingin diubah: " << endl << ">> ";
        cin >> mod;
        sl.atur_nyala(mod);
        sl.PrintAll();

        cout << "Masukkan 1 untuk keluar, 0 untuk lanjut: " << endl << ">> ";
        cin >> ident;
    }

    return 0;
}