#ifndef _HARMING_POTION_HPP_
#define _HARMING_POTION_HPP_

#include "Potion.hpp"

class HarmingPotion : public MixPotion{
    public:
        HarmingPotion(Potion *x, Potion *y);
        int cast();
};

#endif