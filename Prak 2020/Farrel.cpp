#include <stdio.h>

int main(){
    //inisialisasi variabel
    int m = 3; 
    int n = 2;
    double p = 2.0;

    //deklarasi jawaban
    double x = m / p;
    //print pakai f karena tipe double
    printf("x: %f\n", x);

    double y = m / n;
    printf("y: %f\n", y);

    double x1 = 9 * 0.5;
    printf("x1: %f\n", x1);

    int y1 = 9 * 0.5;
    printf("y1: %d\n", y1);
}