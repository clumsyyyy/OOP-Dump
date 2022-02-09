#include "bottle.hpp"


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

Bottle::Bottle(const Bottle &bottle) : id (bottle.id){
    this->height = bottle.height;
    this->radius = bottle.radius;
    this->waterHeight = bottle.waterHeight;
}

Bottle::~Bottle(){

}

int Bottle::getId() const{
    return this->id;
}

float Bottle::getWaterVolume() const{
    return PI * this->radius * this->radius * this->waterHeight;
}

float Bottle::getBottleVolume() const{
    return PI * this->radius * this->radius * this->height;
}

void Bottle::setHeight(float height){
    this->height = height;
    if (this->height < this->waterHeight){
        this->waterHeight = this-> height;
    }
}

void Bottle::substractWater(float waterVolume){
    float height = waterVolume / (PI * this->radius * this->radius);
    this->waterHeight = (this->waterHeight - height) > 0 ? (this->waterHeight - height) : 0;
}

float Bottle::getWaterHeightIfVolume(float waterVolume) const {
    return (waterVolume / (PI * this->radius * this->radius));
}

void Bottle::pourWaterTo(Bottle &other){
    float thisVol = this->getWaterVolume();
    float otherVol = other.getWaterVolume();
    float otherBot = other.getBottleVolume();
    if (thisVol > otherBot - otherVol){
        this->substractWater(otherBot - otherVol);
        other.waterHeight = other.height;
    } else {
        this->waterHeight = 0.00;
        other.addWater(thisVol);
    }
}