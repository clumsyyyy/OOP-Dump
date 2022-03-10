#include "HarmingPotion.hpp"
#include <algorithm>
using namespace std;

HarmingPotion::HarmingPotion(Potion *x, Potion *y) : 
    MixPotion(x, y){};

int HarmingPotion::cast(){
    return -abs(x->cast() + y->cast());
}