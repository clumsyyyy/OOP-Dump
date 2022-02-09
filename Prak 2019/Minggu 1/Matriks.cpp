#include "Matriks.h"
#include <iostream>
#include <algorithm>
using namespace std;

Matriks::Matriks() : num_brs(DEFSIZE), num_kol(DEFSIZE){
    this->b = new int* [num_brs];
    for(int i = 0; i < num_brs; i++){
        this->b[i] = new int[num_kol];
        for(int j = 0; i < num_kol; j++){
            this->b[i][j] = 0;
        }
    }
}

Matriks::Matriks(int n, int m) : num_brs(n), num_kol(m){
    b = new int* [num_brs];
    for(int i = 0; i < num_brs; i++){
        b[i] = new int[num_kol];
        for(int j = 0; i < num_kol; j++){
            b[i][j] = 0;
        }
    }
}

Matriks::Matriks(const Matriks& m) : num_brs(m.num_brs), num_kol(m.num_kol){
    this->b = new int* [num_brs];
    for(int i = 0; i < num_brs; i++){
        this->b[i] = new int[num_kol];
        for(int j = 0; j < num_kol; j++){
            this->b[i][j] = m.b[i][j];
        }
    }
}

Matriks::~Matriks(){
    delete[] this->b;
}

Matriks& Matriks::operator = (Matriks &m){
    this->~Matriks();
    this->b = new int* [num_brs];
    for(int i = 0; i < num_brs; i++){
        this->b[i] = new int[num_kol];
        for(int j = 0; j < num_kol; j++){
            this->b[i][j] = m.b[i][j];
        }
    }
    return *this;
}

bool IsEqSize(Matriks m1, Matriks m2){
    return (m1.num_brs == m2.num_brs && m1.num_kol == m2.num_kol);
}

int Matriks::GetData(int i, int j) const{
    return this->b[i][j];
}
void Matriks::SetData(int i, int j, int v){
    this->b[i][j] = v;
}

int Matriks::GetBrs() const{
    return this->num_brs;
}

int Matriks::GetKol() const{
    return this->num_kol;
}

Matriks Matriks::operator+(Matriks m2){
    int kolom = max(this->num_kol, m2.num_kol);
    int baris = max(this->num_brs, m2.num_brs);

    Matriks *temp = new Matriks(baris, kolom);
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            int x = 0;
            int y = 0;
            if (i < this->num_brs && j < this->num_kol){
                x = this->b[i][j];
            }
            if (i < m2.num_brs && j < m2.num_kol){
                y = m2.b[i][j];
            }
            temp->b[i][j] = x + y;
        }
    }
    return *temp;
}

Matriks operator-(const Matriks &m1, const Matriks &m2){
    int kolom = max(m1.num_kol, m2.num_kol);
    int baris = max(m1.num_brs, m2.num_brs);

    Matriks *temp = new Matriks(baris, kolom);
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            int x = 0;
            int y = 0;
            if (i < m1.num_brs && j < m1.num_kol){
                x = m1.b[i][j];
            }
            if (i < m2.num_brs && j < m2.num_kol){
                y = m2.b[i][j];
            }
            temp->b[i][j] = x - y;
        }
    }
    return *temp;
}

Matriks operator*(const int n, const Matriks m2){
    Matriks *temp = new Matriks(m2.num_brs, m2.num_kol);
    for(int i = 0; i < m2.num_brs; i++){
        for(int j = 0; j < m2.num_kol; j++){
            temp->b[i][j] = n * m2.b[i][j];
        }
    }
    return *temp;
}

bool Matriks::IsSimetri() const{
    return this->num_brs == this->num_kol;
}