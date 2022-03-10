#ifndef _INVERTED_POTION_HPP_
#define _INVERTED_POTION_HPP_

#include "Potion.hpp"

class InvertedPotion : public MonoEffectPotion{
    public:
        InvertedPotion(Potion *x);
        int cast();
};
#endif