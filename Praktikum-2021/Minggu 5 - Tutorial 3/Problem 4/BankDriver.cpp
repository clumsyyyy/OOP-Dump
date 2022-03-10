#include "BaseException.hpp"
#include "Bank.hpp"
#include "Account.cpp"


int main(){
    Bank b;
    b.getAccount(0).setNumber("10");
    b.getAccount(0).add(100);
    b.getAccount(1).setNumber("20");
    b.getAccount(1).add(120);

    b.transfer("10", "20", 150);
}