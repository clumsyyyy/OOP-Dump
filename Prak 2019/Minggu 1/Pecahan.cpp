#include "Pecahan.hpp"

int GCD (int a, int b){
    while (a != b){
        a > b ? a -= b : b -= a;
    }
    return a;
}

int LCM(int a, int b){
    return (a * b / GCD(a, b));
}

void norm(int &pn, int &pa, int &pb) {
	int a, b;
	if (pa > 0 && pb > 0) {
		int gcd = GCD(pa, pb);
		a = pa / gcd;
		b = pb / gcd;
	} else {
		a = pa;
		b = pb;
		if (pa == 0) {
			b = 1;
		}
	}
	pn += a / b;
	pa = a % b;
	pb = b;
}

Pecahan::Pecahan(){
    this->n = 1;
    this->a = 0;
    this->b = 0;
}

Pecahan::Pecahan(int n, int a, int b){
    norm(n, a, b);
    this->n = n;
    this->a = a;
    this->b = b;
}

int Pecahan::getBulat(){
    return this->n;
}

int Pecahan::getPembilang(){
    return this->a;
}

int Pecahan::getPenyebut(){
    return this->b;
}

void Pecahan::setBulat(int _n){
    this->n = _n;
    norm(this->n, this->a, this->b);
}

void Pecahan::setPembilang(int _a){
    this->a = _a;
    norm(this->n, this->a, this->b);
}

void Pecahan::setPenyebut(int _b){
    this->b = _b;
    norm(this->n, this->a, this->b);
}

static bool isValid(int n, int a, int b){
    return (n >= 0 && a >= 0 && b > 1);
}

Pecahan Pecahan::addWithThis(Pecahan P){
    Pecahan p;

    int pa = (getPembilang() * P.getPenyebut()) + (P.getPembilang() * getPenyebut());
    int pb = getPenyebut() * P.getPenyebut();

    p.setBulat(getBulat() + P.getBulat());
    p.setPembilang(pa);
    p.setPenyebut(pb);

    return p;
}

void Pecahan::accumulate(Pecahan P){
    Pecahan p = this->addWithThis(P);
    this->setBulat(p.getBulat());
    this->setPembilang(p.getPembilang());
    this->setPembilang(p.getPenyebut());
}

Pecahan Pecahan::add(Pecahan P1, Pecahan P2){
    return P1.addWithThis(P2);
}

float Pecahan::value(){
    return float(a) / float(b) + float(n);
}

bool Pecahan::isEQMe(Pecahan P){
    return P.value() == this->value();
}

bool Pecahan::isGTMe(Pecahan P){
    return P.value() > this->value();
}

bool Pecahan::isLTMe(Pecahan P){
    return P.value() < this->value();
}