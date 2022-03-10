// Class Property
// File: Property.h

#ifndef PROPERTY_H
#define PROPERTY_H
#include <string>
#define CURRENT_YEAR 2022
using namespace std;
class Property {
protected:
    // Atribut
    string name;
    string type; //hotel; hostels; villas; cottages
    int openYear;
public:
    Property();
    Property(string, int, string);
    // Property(const Property&p);
    // ~Property();
    void set_name(string);
    string get_name() const;
    void set_type(string);
    string get_type() const;
    int get_age() const;
    virtual void displayInfo() const;
    float rate() const;
// User-defined constructor: set nilai atribut berdasarkan nilai
// parameter masukan
// Default constructor: set nilai atribut sbb:
// name = "noname"; openYear = 1900; type = "none"
// Copy constructor
// Destructor
// Operator Assignment
// ... set_name(...)
// ... get_name()
// ... set_type(...)
// ... get_type()
// ... get_age(), asumsikan tahun saat ini dapat diakses dengan
// makro CURRENT_YEAR
// ... displayInfo(): Mencetak nama, umur, type, dan rate Property
// ... rate(): menghitung biaya property sesuai dengan umur dan
// tergantung type property
};
#endif // PROPERTY_H