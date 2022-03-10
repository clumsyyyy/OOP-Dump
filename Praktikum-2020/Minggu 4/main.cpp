#include "Tool.hpp"
#include "Pickaxe.hpp"
#include "ReinforcedAxe.hpp"

int main(){
    Pickaxe *P1 = new Pickaxe();
    P1->use();
    P1->enchant();
    Pickaxe *P1C = new Pickaxe(*P1);
    Pickaxe *P1CC = new Pickaxe();
    (*P1CC) = (*P1C);
    ReinforcedAxe *R1 = new ReinforcedAxe();
    R1->use();
    ReinforcedAxe *R1C = new ReinforcedAxe(*R1);
    R1C->enchant();
    ReinforcedAxe *R2 = new ReinforcedAxe((*R1C) + (*R1C));
    R2->repair();
    delete R1C;
    delete R1;
    delete R2;
    delete P1C;
    delete P1;
}