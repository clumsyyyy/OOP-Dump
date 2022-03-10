#include <iostream>
using namespace std;

class Point{
    private:
        int x;
        int y;
    public:
        Point(int x, int y): x(x), y(y) {}
        int getX() { return this->x; }
        int getY() { return this->y; }
        friend ostream& operator << (ostream& out, const Point& p) {
            out << "(" << p.x << ", " << p.y << ")";
            return out;
        }
};

template <class T>
void PrintArray(const T arr[], int N) {
    if (N == 0) {
        cout << "Array kosong" << endl;
    } else {
        for (int i = 0; i < N; i++) {
            cout << arr[i] << endl;
        }
    }
}

/* Apabila ingin melakukan print untuk class Point,
harus dilakukan operator overloading << di class Point */

int main(){
    int a[] = {1,2,3,-10};
    PrintArray<int>(a, sizeof(a) / sizeof(a[0]));
    Point p[] = {Point(1,2), Point(3,4), Point(5,6)};
    PrintArray<Point>(p, sizeof(p) / sizeof(p[0]));
}