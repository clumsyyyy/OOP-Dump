#include "ball.cpp"
using namespace std;

int main(){
    Ball b1; //cara manggil yang biasa
    Ball b2(5); //cara manggil constructor argumen
    Ball b3(b2); //cara manggil constructor copy dgn &
    b1.bounce();
    b2.bounce();
    b3.bounce();
    return 0;
}