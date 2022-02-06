#ifndef __FOOMEM_H__
#define __FOOMEM_H__

const int MAX = 10;

class FooMem{
    private:
        int* mem;
        int size;
        int left;
        int right;
        
    public:
        FooMem(); //ctor, memori dialokasi berukuran Max, size = Max, left = -1, right = Max
        FooMem (int _s); //ctor, memori dialokasi berukuran _s, size = _s, left = -1, right = _s, _s <= max
        FooMem (FooMem& F); //cctor
        ~FooMem(); //dtor

        FooMem& operator = (FooMem& F); //operator=
        int GetLeft(); //mengembalikan nilai terkiri, left = -1 kalau kosong
        int GetRight(); //mengembalikan nilai terkanan, right = size kalau kosong
        bool isEmpty() const; //mengembalikan boolean true jika kosong
        bool isFull() const; //mengembalikan boolean true jika penuh

        void Add(int x); //menambahkan x ke memori
        int Del(); //menghapus elemen foomem
        void Print(); //menampilkan isi memori
};  

#endif