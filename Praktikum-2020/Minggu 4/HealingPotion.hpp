#ifndef _HEALING_POTION_HPP_
#define _HEALING_POTION_HPP_

#include "Potion.hpp"

class HealingPotion : public MixPotion{
    public:
        HealingPotion(Potion *x, Potion *y);
        int cast();
};

#endif