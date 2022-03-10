#include "Hotel.cpp"
#include "Hostel.cpp"   
#include "Property.cpp"
#include <iostream>
using namespace std;

int main(){
    Hotel hilton = Hotel("Hotel Hilton", 1900, 5);
    Hostel vio = Hostel("Hostel Vio", 2003, 40);
    hilton.displayInfo(); 
    cout << endl;
    vio.displayInfo(); 
    cout << endl;
    cout << "Calculated facility for " << vio.get_name() << ": " << vio.calculate_facility() << endl; 
}