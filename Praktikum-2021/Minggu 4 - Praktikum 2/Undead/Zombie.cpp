#include "Zombie.hpp"
#include <algorithm>
#include <iostream>
using namespace std;

Zombie::Zombie(int _stamina) : Undead (_stamina){}

void Zombie::attack(Player& player){
    if (this->stamina > 0){
        this->stamina--;
        if (player.getHealth() > 0){
            player.setHealth(max(player.getHealth() - 3, 0));
        } else if (player.getHealth() == 0 && this->stamina > 0) {
            cout << "nom nom nom" << endl;
        }
    } else {
        cout << "oof" << endl;
    }
}