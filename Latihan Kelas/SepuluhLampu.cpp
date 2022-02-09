#include "SepuluhLampu.h"

Sepuluh_Lampu::Sepuluh_Lampu(){
    size = 10;
    Neff = 0;
    array_Lampu = new Lampu[size];
}

Sepuluh_Lampu::Sepuluh_Lampu(int nEff){
    size = 10;
    Neff = nEff;
    array_Lampu = new Lampu[size];
}

Sepuluh_Lampu::Sepuluh_Lampu(const Sepuluh_Lampu& sl){
    size = sl.size;
    Neff = sl.Neff;
    array_Lampu = new Lampu[size];
    for (int i = 0; i < Neff; i++){
        array_Lampu[i] = sl.array_Lampu[i];
    }
}

Sepuluh_Lampu::~Sepuluh_Lampu(){
    delete[] array_Lampu;
}

Sepuluh_Lampu& Sepuluh_Lampu::operator+(const Lampu& l){
    if (Neff < size){
        array_Lampu[Neff] = l;
        Neff++;
    }
    return *this;
}


Sepuluh_Lampu& Sepuluh_Lampu::operator*=(const Sepuluh_Lampu& sl){
    if (Neff < size){
        for (int i = 0; i < sl.Neff; i++){
            array_Lampu[Neff] = sl.array_Lampu[i];
            Neff++;
        }
    }
    return *this;
}

void Sepuluh_Lampu::atur_nyala(int mod){
    for (int i = mod; i < Neff; i += mod){
        if (this->array_Lampu[i - 1].get_info()){
            this->array_Lampu[i - 1].set_mati();
        } else {
            this->array_Lampu[i - 1].set_nyala();
        }
    }
}

void Sepuluh_Lampu::PrintAll(){
    for(int i = 0; i < Neff; i++){
        this->array_Lampu[i].PrintInfo();
    }
}