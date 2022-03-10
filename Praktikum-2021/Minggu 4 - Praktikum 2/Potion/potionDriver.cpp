#include <iostream>
#include "HealingPotion.cpp"
#include "HarmingPotion.cpp"
#include "InvertedPotion.cpp"
#include "Potion.cpp"
using namespace std;

int main(){
    HealingPotion *p1 = new HealingPotion(new BasePotion(6), new BasePotion(-10));
    cout << p1->cast() << endl;

    HarmingPotion *p2 = new HarmingPotion(new BasePotion(6), new BasePotion(-10));
    cout << p2->cast() << endl;

    InvertedPotion *p3 = new InvertedPotion(new BasePotion(-5));
    cout << p3->cast() << endl;

}