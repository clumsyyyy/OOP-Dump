#include "BurnableBarrel.hpp"

BurnableBarrel::BurnableBarrel():
    Damageable(),
    Burnable() {}

BurnableBarrel::BurnableBarrel(int health):
    Damageable(health),
    Burnable() {}

void BurnableBarrel::takeDamage(int damage, string elmt){
    if (this->isDestroyed()) {
        return;
    } else {
        if (elmt == "fire") {
            this->burn();
        } else if (elmt == "water") {
            this->watered();
        }
    }
    if (this->isBurned()) {
        damage *= multiplier;
    } 
    Damageable::takeDamage(damage);
}