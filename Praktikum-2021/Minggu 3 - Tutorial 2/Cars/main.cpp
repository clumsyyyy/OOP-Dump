#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bike.h"
using namespace std;

/*
    NIM: 13520124
    Nama: Owen Christian Wijaya
    Implementasi Main untuk Vehicle
*/
int main(){
    Car* c1 = new Car(4);
    Car* c2 = new Car(10);
    Bike* b1 = new Bike();
    Vehicle* v1 = new Vehicle(*b1);
    delete b1;
    c2->Vehicle::drive();
    v1->clean();
    c1->drive();
    v1->park();
    delete c2;
    delete v1;
    delete c1;
}