#include "Car.hpp"
#include <iostream>
using namespace std;

Car::Car(int capacity) : Vehicle(4, capacity){
    cout << "ctor car " << wheels << " " << capacity << endl;
}

Car::Car(const Car& c) : Vehicle(4, c.capacity){
    this->wheels = c.wheels;
    this->capacity = c.capacity;
    cout << "cctor car " << wheels << " " << capacity << endl;
}

Car::~Car() {
    cout << "dtor car " << wheels << " " << capacity << endl;
}

Car& Car::operator = (const Car& c){
    wheels = c.wheels;
    capacity = c.capacity;
    cout << "assign car " << wheels << " " << capacity << endl;
    return *this;
}

void Car::drive() {
    cout << "someone is driving this car " << wheels << " " << capacity << endl;
}