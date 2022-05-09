#include "Hotel.cpp"
#include "Hostel.cpp"   
#include "Property.cpp"
#include <iostream>
using namespace std;

int main(){
    Property* p1 = new Hostel("Hotel Bintang 3", 2000, 3);
    Hotel hilton = Hotel("Hotel Hilton", 1900, 5);
    Hostel vio = Hostel("Hostel Vio", 2003, 40);
    hilton.displayInfo(); 
    cout << endl;
    vio.displayInfo(); 
    cout << endl;
    cout << "Calculated facility for " << vio.get_name() << ": " << vio.calculate_facility() << endl; 
    cout << endl;
    p1->displayInfo();
}