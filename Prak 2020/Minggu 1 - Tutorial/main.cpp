#include "Box.hpp"
/*
    NIM: 13520124
    Nama: Owen Christian Wijaya
    Topik: Tutorial OOP 1
    Deskripsi: Implementasi box.cpp
*/

int main(){
    Box *B1 = new Box(2);
    Box *B2 = new Box();
    Box *B3 = new Box(1);
    *B2 = *B1;
    Box *B4 = new Box(*B3);
    B1->peek();
    B3->peek();
    delete B1;
    delete B3;
    delete B4;
    delete B2;
}