#include "Bottle.hpp"

/*
    NIM: 13520124
    Nama: Owen Christian Wijaya
    Topik: Tutorial OOP 1
    Deskripsi: Implementasi header file bottle.cpp
*/

int Bottle::numOfBottle = 0;

Bottle::Bottle() : id(numOfBottle + 1){
    this->height = 10.00;
    this->radius = 10.00;
    this->waterHeight = 0.00;
    numOfBottle++;
}

Bottle::Bottle(float height, float radius) : id(numOfBottle + 1){
    this->height = height;
    this->radius = radius;
    this->waterHeight = 0.00;
    numOfBottle++;
}

Bottle::Bottle(const Bottle &bottle) : id(bottle.id){
    this->height = bottle.height;
    this->radius = bottle.radius;
    this->waterHeight = bottle.waterHeight;
}

Bottle::~Bottle(){

}

int Bottle::getId() const{
    return this->id;;
}

float Bottle::getWaterVolume() const{
    return PI * this->radius * this->radius * this->waterHeight;
}

float Bottle::getBottleVolume() const{
    return PI * this->radius * this->radius * this->height;
}

void Bottle::setHeight(float height){
    this->height = height;
    //jika tinggi < waterHeight, maka waterHeight menyesuaikan
    if (height < this->waterHeight){
        this->waterHeight = height;
    }
}

void Bottle::addWater(float waterVolume){
    float tempHeight = waterVolume / (PI * this->radius * this->radius);
    //clamp nilai tinggi air kalau jumlah vol lebih banyak
    if (this->waterHeight + tempHeight > this->height){
        this->waterHeight = this->height;
    } else {
        this->waterHeight += tempHeight;
    }
}

void Bottle::substractWater(float waterVolume){
    float tempHeight = waterVolume / (PI * this->radius * this->radius);
    //clamp nilai tinggi air kalau jumlah vol lebih banyak
    if (this->waterHeight - tempHeight < 0.00){
        this->waterHeight = 0.00;
    } else {
        this->waterHeight -= tempHeight;
    }
}

float Bottle::getWaterHeightIfVolume(float waterVolume) const{
    return (waterVolume / (PI * this->radius * this->radius));
}

void Bottle::pourWaterTo(Bottle &other){
    float currWVolume = PI * this->radius * this->radius * this->waterHeight;
    float otherWVolume = other.getWaterVolume();
    float otherBVolume = other.getBottleVolume();
    if (currWVolume > otherBVolume - otherWVolume){
        this->substractWater(otherBVolume - otherWVolume);
        other.waterHeight = other.height;
    } else {
        this->waterHeight = 0.00;
        other.addWater(currWVolume);
    }
}