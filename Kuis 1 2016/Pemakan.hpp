#ifndef PEMAKAN_CPP
#define PEMAKAN_CPP

class Pemakan{
    public:
        void makan();
};

class Beruang : public Pemakan{
    public:
        void berbunyi();
        void berjalan();
    private:
        char* Nama;
        int umur;
};

class Panda : public Beruang{
    private:
        int warna;
};
#endif