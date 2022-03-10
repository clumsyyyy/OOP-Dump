#include <iostream>
using namespace std;

class Jam{
    int h;
    int m;
    int s;
    public:
        Jam(int h, int m, int s) {
            this->h = h;
            this->m = m;
            this->s = s;
        }
        Jam(const Jam& j){
            this->h = j.h;
            this->m = j.m;
            this->s = j.s;
        }
        int returnTime() {
            return (h * 3600) + (m * 60) + s;
        }
        friend ostream& operator <<(ostream& os, const Jam& j) {
            os << j.h << ":" << j.m << ":" << j.s;
            return os;
        }
};

template <class T>
T MinArray(const T* arr, int N) {
    T min = arr[0];
    for (int i = 1; i < N; i++) {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}

template <>
Jam MinArray(const Jam* arr, int N) {
    Jam min = arr[0];
    for (int i = 1; i < N; i++) {
        Jam temp = arr[i];
        if (min.returnTime() > temp.returnTime())
            min = arr[i];
    }
    return min;
}

/* Apabila ingin melakukan pencarian untuk class Jam,
harus didefinisikan overload operator << di class Jam 
dan template khusus untuk menerima array of Jam*/
int main() {
    int a[] = {1,2,3,-10};
    float b[] = {2.3,1,2.1,3.9,-0.1,2.9,-2.5};
    Jam j[] = {Jam(1,2,3), Jam(2,3,4), Jam(3,4,5), Jam(0,0,0)};
    cout << MinArray<int>(a, sizeof(a) / sizeof(a[0])) << endl;
    cout << MinArray<float>(b, sizeof(b) / sizeof(b[0])) << endl;
    cout << MinArray<Jam>(j, sizeof(j) / sizeof(j[0])) << endl;
}