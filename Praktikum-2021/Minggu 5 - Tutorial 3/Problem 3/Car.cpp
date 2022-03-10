#include "Car.h"

Car::Car(Fuel t_fuel) {
    this->fuel = t_fuel;
    this->gear = 0;
    this->ac_power = 0;
    this->on = false;
}

Fuel Car::getFuel(){
    return this->fuel;
}

int Car::getGear(){
    return this->gear;
}

int Car::getAcPower(){
    return this->ac_power;
}

bool Car::getOn(){
    return this->on;
}

void Car::fillingFuel(Fuel t_fuel, int amount_in_liter){
    if (this->fuel == t_fuel){
        cout << "Berhasil isi bensin sebanyak " << amount_in_liter << " liter" << endl;
    } else {
        throw t_fuel;
    }
}

void Car::changeGear(int t_gear){
    if (t_gear >= MIN_GEAR && t_gear <= MAX_GEAR){
        cout << "Berhasil mengubah gigi menjadi gigi " << t_gear << endl;
        this->gear = t_gear;
    } else {
        throw t_gear;
    }
}

void Car::changeAcPower(int t_ac_power){
    if (t_ac_power >= MIN_AC && t_ac_power <= MAX_AC){
        cout << "Berhasil mengubah power ac menjadi " << t_ac_power << endl;
        this->ac_power = t_ac_power;
        
    } else {
        throw t_ac_power;
    }
}

void Car::start(){
    if (!this->on){
        this->on = true;
        cout << "Berhasil melakukan starter mobil" << endl;
    } else {
        throw this->on;
    }
}

void Car::service(Fuel t_fuel, int amount_in_liter, int t_gear, int t_ac_power){
    try{
        this->start();
        this->fillingFuel(t_fuel, amount_in_liter);
        this->changeGear(t_gear);
        this->changeAcPower(t_ac_power);
    } catch (bool on){
        cout << "Mobil sudah menyala" << endl;
    } catch (int gear){
        cout << "Input angka diluar range" << endl;
    } catch (Fuel type){
        cout << "Bensin tidak sesuai" << endl;
    }
}