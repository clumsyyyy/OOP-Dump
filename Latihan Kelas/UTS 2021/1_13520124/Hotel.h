// Class Hotel
// File: Hotel.h
#ifndef HOTEL_H
#define HOTEL_H
#include <string>
#define CURRENT_YEAR 2022
using namespace std;
class Hotel {
 protected:
 // Atribut
 string name;
 string bintang; //Melati; bintang_tiga; bintang_empat; bintang_lima
 int openYear;
 public:
 Hotel();
 Hotel(string name, string bintang, int openYear);
 // User-defined constructor: set nilai atribut berdasarkan nilai parameter masukan
 // Default constructor: set nilai atribut sbb:
 // name = "noname"; openYear = 1900; bintang = "none"
 
 // Copy constructor
 // TIDAK PERLU
 // Destructor
 // TIDAK PERLU
 // Operator Assignment
 
 void set_name(string);
 
 string get_name() const;
 
 void set_bintang(string);
 
 string get_bintang() const;

 int get_age() const;

 virtual void displayInfo() const;
 
 int rate() const; 
};

class bintang_empat : public Hotel{
    public:
        bintang_empat();
        bintang_empat(string name, int year);
        void set_star(string star);
        string get_star() const;
        void displayInfo() const;
};

class bintang_lima : public Hotel{
    private:
        int facility;
    public:
        bintang_lima();
        bintang_lima(string name, int year, int facility);
        void set_facility(int faciility);
        int get_facility() const;
        int calculateFacility() const;
        void displayInfo() const;
};

#endif // HOTEL_H
