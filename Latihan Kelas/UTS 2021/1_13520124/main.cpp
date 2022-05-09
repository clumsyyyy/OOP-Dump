#include "Hotel.h"
#include <iostream>
using namespace std;

/*
NIM: 13520124
Nama: Owen Christian WIjaya
UTS OOP 2021 - Main Driver untuk Hotel
*/

int main(){
    bintang_empat aston = bintang_empat("Hotel Aston", 2010);
    bintang_lima padma = bintang_lima("Hotel Padma", 2000, 10);
    aston.displayInfo();
    cout << " " << endl;
    padma.displayInfo();
    cout << " " << endl;
    aston.set_star("3");
    aston.displayInfo();
    cout << "Fasilitas untuk hotel Padma: " << padma.calculateFacility() << endl;
}