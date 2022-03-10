#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

template <class T>
class Queue{
    protected:
        T* buffer;
        int size = 0;
    public:
        //default constructor
        Queue();

        //destruktor
        ~Queue();

        //method enqueue
        void enqueue(T elmt);

        // method dequeue
        void dequeue(T& res);

        void print();
        // // EXPERIMENTAL: get buffer for ostream
        // T& getBuf(int idx){
        //     return this->buffer[idx];
        // }

};

#endif