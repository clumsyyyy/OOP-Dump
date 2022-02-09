#include <iostream>
#include "Lampu.h"

Lampu::Lampu(): no_lamp(0), nyala_lampu(false) {};

Lampu::Lampu(int a, bool b): no_lamp(a), nyala_lampu(b) {};

Lampu::Lampu(const Lampu& a): no_lamp(a.no_lamp), nyala_lampu(a.nyala_lampu) {};

void Lampu::set_nyala() {
    nyala_lampu = true;
}

void Lampu::set_mati() {
    nyala_lampu = false;
}

bool Lampu::get_info() {
    return nyala_lampu;
}

void Lampu::PrintInfo() const {
    if (nyala_lampu) {
        std::cout << "Lampu " << no_lamp << ": Nyala" << std::endl;
    } else {
        std::cout << "Lampu " << no_lamp << ": Mati" << std::endl;
    }
}