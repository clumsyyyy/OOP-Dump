#include "InvertedPotion.hpp"

InvertedPotion::InvertedPotion(Potion *x):
    MonoEffectPotion(x) {};

int InvertedPotion::cast(){
    return -x->cast();
}