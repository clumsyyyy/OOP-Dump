#include "SpacingGuildShip.hpp"
#include <iostream>
using namespace std;

/*
    NIM: 13520124
    Nama: Owen Christian Wijaya
    Topik: Praktikum OOP 1
    Deskripsi: Implementasi spacing guild ship
*/


float SpacingGuildShip::totalGuildTravel = 0.0;
int SpacingGuildShip::producedShips = 0;

SpacingGuildShip::SpacingGuildShip() : 
    maxPassengerCap(50), 
    guildNavigatorCount(3), 
    serialNum(++SpacingGuildShip::producedShips),
    passengerCount(0),
    operatingGuildNavigator(3),
    spiceStock(50) {};

SpacingGuildShip::SpacingGuildShip(int maxPassengerCap, int guildNavigatorCount, int spiceStock) : 
    maxPassengerCap(maxPassengerCap), 
    guildNavigatorCount(guildNavigatorCount), 
    serialNum(++SpacingGuildShip::producedShips),
    passengerCount(0),
    operatingGuildNavigator(guildNavigatorCount),
    spiceStock(spiceStock) {};

SpacingGuildShip::SpacingGuildShip(const SpacingGuildShip &s) : 
    maxPassengerCap(s.maxPassengerCap), 
    guildNavigatorCount(s.guildNavigatorCount), 
    serialNum(++SpacingGuildShip::producedShips),
    passengerCount(s.passengerCount),
    operatingGuildNavigator(s.operatingGuildNavigator),
    spiceStock(s.spiceStock) {};

SpacingGuildShip::~SpacingGuildShip(){}

int SpacingGuildShip::getShipSerialNum() const{
    return this->serialNum;
}

int SpacingGuildShip::getPassengerCount() const{
    return this->passengerCount;
}

void SpacingGuildShip::travel(float distance){
    if (this->operatingGuildNavigator > 0){
        totalGuildTravel += (distance / (E * E * operatingGuildNavigator));
        this->operatingGuildNavigator--;
    }
}

void SpacingGuildShip::boarding(int addedPassengers){
    if (this->passengerCount + addedPassengers <= this->maxPassengerCap){
        this->passengerCount += addedPassengers;
    } else {
        this->passengerCount = this->maxPassengerCap;    
    }
}

void SpacingGuildShip::dropOff(int droppedPassengers){
    if (this->passengerCount - droppedPassengers >= 0){
        this->passengerCount -= droppedPassengers;
    } else {
        this->passengerCount = 0;
    }
}

void SpacingGuildShip::refreshNavigator(int n){
    int spices = 0;
    if (this->operatingGuildNavigator + n <= this->guildNavigatorCount){
        spices = n;
    } else {
        spices = this->guildNavigatorCount - this->operatingGuildNavigator;
    }

    while (spices * GUILD_NAVIGATOR_SPICE_DOSE > spiceStock){
        spices--;
    }

    this->operatingGuildNavigator += spices;
    spiceStock -= spices * GUILD_NAVIGATOR_SPICE_DOSE;
}

void SpacingGuildShip::transitToArrakis(int addedSpice){
    this->spiceStock += addedSpice;
}