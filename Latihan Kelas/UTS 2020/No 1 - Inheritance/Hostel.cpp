
#include "Property.h"
#include <iostream>
using namespace std;

class Hostel : public Property {
    private:
        int facility;
    public:
        Hostel() : Property(){};
        Hostel(string name, int year, int facility) : 
            Property(name, year, "hostel"){ 
                this->facility = facility;
            };

        void displayInfo(){
            Property::displayInfo();
            cout << "Fasilitas: " << this->facility << endl;
        }
        void set_facility(int facility){
            this->facility = facility;
        }
        int get_facility(){
            return this->facility;
        }
        int calculate_facility(){
            return this->facility * 80000;
        }
};
