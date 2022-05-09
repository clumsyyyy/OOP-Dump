#include "Queue.h"
#include <iostream>
using namespace std;

/*
NIM: 13520124
Nama: Owen Christian WIjaya
UTS OOP 2021 - Main Driver untuk Queue
*/
class Mobil{
    private:
        string nama;
        int harga;
    public:
        Mobil(){
            this->nama = "";
            this->harga = 0;
        }
        Mobil(string nama, int harga){
            this->nama = nama;
            this->harga = harga;
        }

        friend ostream& operator << (ostream& out, const Mobil& m) {
            out << "(" << m.nama << ", " << m.harga << ")";
            return out;
        }
};

int main(){

    // implementasi untuk integer
    Queue<int> q;
    int res;
    q.dequeue(res);
    q.enqueue(8);
    q.enqueue(6);
    q.enqueue(4);
    cout << q;
    q.enqueue(9);
    q.dequeue(res);
    cout << "Returned value: " << res << endl;
    q.enqueue(2);
    cout << q;
    q.dequeue(res);
    cout << "Returned value: " << res << endl;

    cout << endl;

    // implementasi untuk float
    Queue<float> fq;
    float fres;

    fq.dequeue(fres);
    fq.enqueue(7.5);
    fq.enqueue(5.5);
    fq.enqueue(3.5);
    cout << fq;
    fq.enqueue(8.5);
    fq.dequeue(fres);
    cout << "Returned value: " << fres << endl;
    fq.enqueue(1.5);
    cout << fq;
    fq.dequeue(fres);
    cout << "Returned value: " << fres << endl;
    cout << endl;
    // implementasi untuk tipe mobil
    Queue<Mobil> mq;
    Mobil mres;
    mq.enqueue(Mobil("Avanza", 100000));
    mq.enqueue(Mobil("Sigra", 20000));
    mq.enqueue(Mobil("Civic", 500000));
    mq.enqueue(Mobil("Innova", 20400));
    cout << mq;
    mq.dequeue(mres);
    cout << mres;
}