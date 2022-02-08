#ifndef KOMPLEKS_H
#define KOMPLEKS_H

class Kompleks{
    private:
        int real;
        int imaginer;
    public:
        Kompleks();
        Kompleks(int real, int imaginer);
        Kompleks(const Kompleks& K);
        ~Kompleks();

        Kompleks operator = (Kompleks const& K);
        Kompleks operator + (Kompleks const& K);
        Kompleks operator - (Kompleks const& K);
        Kompleks operator * (Kompleks const& K);
        void display();
    
};
#endif