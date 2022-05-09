
#include "Property.h"
#include <iostream>
using namespace std;

class Hotel : public Property {
    private:
        int star;
    public:
        Hotel() : Property(){};
        Hotel(string name, int year, int star) : 
            Property(name, year, "hotel"){ 
                this->star = star;
            };

        void displayInfo() const{
            Property::displayInfo();
            cout << "Bintang: " << this->star << endl;
        }
        void set_star(int star){
            this->star = star;
        }
        int get_star(){
            return this->star;
        }
};
