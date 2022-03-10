#include "HealingPotion.hpp"
#include <algorithm>
using namespace std;
HealingPotion::HealingPotion(Potion *x, Potion *y) : 
    MixPotion(x, y){};

int HealingPotion::cast(){
    return abs(x->cast() + y->cast());
}