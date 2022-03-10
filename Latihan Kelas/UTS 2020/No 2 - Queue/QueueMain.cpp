#include "Queue.hpp"
#include "Prioqueue.hpp"
#include <iostream>
using namespace std;

int main(){
    Prioqueue<int> q;
    int res;
    q.enqueue(8, 1);
    q.enqueue(6, 2);
    q.enqueue(4, 1);
    q.dequeue(res);
    q.enqueue(2, 3);
    q.dequeue(res);
}