#include <iostream>
#include "Queue.h"
using namespace std;
template <class T>
Queue<T>::Queue(){
    this->size = 0;
    this->buffer = new int[this->size];
}

//destruktor
template <class T>
Queue<T>::~Queue(){
    delete[] this->buffer;
}

//method enqueue
template <class T>
void Queue<T>::enqueue(T elmt){
    if (size == 10){
        throw "Maximum size exceeded";
    } else {
        this->buffer[size] = elmt;
        size++;
        cout << "enqueued element: " << elmt << endl;
    }
}

// method dequeue
template <class T>
void Queue<T>::dequeue(T& res){
    if (size == 0){
        throw "yepcock";
    } else {
        res = this->buffer[0];
        size--;
        for (int i = 0; i < size; i++){
            this->buffer[i] = this->buffer[i+1];
        }
    }
}
template <class T>
void Queue<T>::print(){
    for (int i = 0; i < this->size; i++){
        cout << this->buffer[i] << " ";
    }
    cout << endl;
}
