#include "Wallet.hpp"
#include <iostream>
using namespace std;

/*
    NIM: 13520124
    Nama: Owen Christian Wijaya
    Topik: Praktikum OOP 1
    Deskripsi: Implementasi main untuk wallet
*/

int main(){
    Wallet *W1 = new Wallet();
    Wallet *W2 = new Wallet(1, 10000);
    W2->checkBalance();
    Wallet *W3 = new Wallet(2, 8000);
    (*W3) = (*W2);
    W2->addBalance(5000);
    W1->addBalance(3000);
    W1->checkBalance();
    W3->checkBalance();
    W2->checkBalance();
    delete W2;
    delete W1;
    delete W3;
    return 0;
}