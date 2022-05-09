#include "Queue.hpp"
#include "Prioqueue.hpp"
#include <iostream>
using namespace std;

int main(){
    Prioqueue<float> q;
    float res;
    q.enqueue(7.9, 1);
    q.enqueue(6.0, 2);
    q.enqueue(4.0, 1);
    q.dequeue(res);
    q.enqueue(2.0, 3);
    q.dequeue(res);
    cout << q;
}