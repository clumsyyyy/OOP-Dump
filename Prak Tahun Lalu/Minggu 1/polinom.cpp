#include <iostream>
#include "polinom.hpp"
using namespace std;

//constructor derajat 0
Polinom::Polinom() : Polinom(0){}

//constructor derajat n
Polinom::Polinom(int n){
    this->derajat = n;
    for(int i = 0; i <= n; i++){
        this->koef[i] = 0;
    }
}

//copy constructor
Polinom::Polinom(const Polinom &Pol){
    this->derajat = Pol.derajat;
    for (int i = 0; i <= this->derajat; i++){
        this->koef[i] = Pol.koef[i];
    }
}

//destructor
Polinom::~Polinom(){}

//return polinom baru
Polinom &Polinom::operator = (const Polinom &Pol){
    this->derajat = Pol.derajat;
    for (int i = 0; i <= this->derajat; i++){
        this->koef[i] = Pol.koef[i];
    }
    return *this;
}

//getter / setter
int Polinom::getKoefAt(int idx) const{
    return this->koef[idx];
}

int Polinom::getDerajat() const{
    return this->derajat;
}

void Polinom::setKoefAt(int idx, int val){
    this->koef[idx] = val;
}

void Polinom::setDerajat(int der){
    this->derajat = der;
}

//operator overloading
Polinom operator + (const Polinom &P1, const Polinom &P2){
    Polinom P(max(P1.derajat, P2.derajat));

    for(int i = 0; i <= min(P1.derajat, P2.derajat); i++){
        P.koef[i] = P1.koef[i] + P2.koef[i];
    }

    if (P1.derajat > P2.derajat){
        for(int i = P2.derajat + 1; i <= P1.derajat; i++){
            P.koef[i] = P1.koef[i];
        }
    } else {
        for(int i = P1.derajat + 1; i <= P2.derajat; i++){
            P.koef[i] = P2.koef[i];
        }
    }
    return P;
}

Polinom operator - (const Polinom &P1, const Polinom &P2){
    Polinom P(max(P1.derajat, P2.derajat));
    for(int i = 0; i <= min(P1.derajat, P2.derajat); i++){
        P.koef[i] = P1.koef[i] - P2.koef[i];
    }
    if (P1.derajat > P2.derajat){
        for(int i = P2.derajat + 1; i <= P1.derajat; i++){
            P.koef[i] = P1.koef[i];
        }
    } else {
        for(int i = P1.derajat + 1; i <= P2.derajat; i++){
            P.koef[i] = -P2.koef[i];
        }
    }
    return P;
}

Polinom operator * (const Polinom &P1, const int K){
    Polinom P(P1.derajat);
    for(int i = 0; i <= P1.derajat; i++){
        P.koef[i] = P1.koef[i] * K;
    }
    return P;
}
 
//perkalian komutatif
Polinom operator * (const int K, const Polinom &P1){
    Polinom P(P1.derajat);
    for(int i = 0; i <= P1.derajat; i++){
        P.koef[i] = P1.koef[i] * K;
    }
    return P;
}

Polinom operator / (const Polinom &P1, const int K){
    Polinom P(P1.derajat);
    for(int i = 0; i <= P1.derajat; i++){
        P.koef[i] = P1.koef[i] / K;
    }
    return P;
}

void Polinom::input(){
    for (int i = 0; i <= this->derajat; i++){
        cin >> this-> koef[i];
    }
}

void Polinom::printKoef(){
    for(int i = 0; i <= this->derajat; i++){
        cout << this->koef[i] << endl;
    }
}

int Polinom::substitute(int x){
    int sum = this->getKoefAt(this->derajat);
    for (int i = this->derajat - 1; i >= 0; i--){
        sum = sum * x + this->getKoefAt(i);
    }
    return sum;
}

Polinom Polinom::derive(){
    int degree = (this->derajat) ? (this->derajat - 1) : 0;
    Polinom POut(degree);
    for (int i = this->derajat - 1; i >= 0; i--){
        POut.setKoefAt(i, (i + 1) * this->getKoefAt(i + 1));
    }
    return POut;
}

void printElmt(int i, bool printed, const Polinom &P){
    if (P.getKoefAt(i) > 0 && printed){
        cout << "+";
    }
    if (P.getKoefAt(i) < 0){
        cout << "-";
    }
    if (i == 0){
        cout << abs(P.getKoefAt(i));
    } else {
        if (abs(P.getKoefAt(i)) != 1){
            cout << abs(P.getKoefAt(i));
        }
    }
    cout << "x^" << i;
}

void Polinom::print() {
  bool printed = false;
  for (int i = 0; i <= getDerajat(); i++) {
    if (getKoefAt(i) != 0) {
      printElmt(i, printed, *this);
      printed = true;
    }
  }
  if (!printed) cout << "0";
  cout << endl;
}