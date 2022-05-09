#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>
using namespace std;

template <class T>
class Queue{
    protected:
        T* buffer;
        int size = 0;
    public:
        //default constructor
        Queue(){
            this->size = 0;
            this->buffer = new T[this->size];
        }


        //destruktor
        ~Queue(){
            delete[] this->buffer;
        }

        //method enqueue
        void enqueue(const T& elmt){
            if (size == 10){
                throw "Maximum size exceeded";
            } else {
                this->buffer[size] = elmt;
                size++;
                cout << "enqueued element: " << elmt << endl;
            }
        }

        // method dequeue
        void dequeue(T& res){
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

        void print(){
            for (int i = 0; i < this->size; i++){
                cout << this->buffer[i] << " ";
            }
            cout << endl;
        }
        // // EXPERIMENTAL: get buffer for ostream
        // T& getBuf(int idx){
        //     return this->buffer[idx];
        // }

        friend std::ostream& operator<<(ostream& os, Queue<T> q){
            os << "<";
            for (int i = 0; i < q.size; i++){
                os << q.buffer[i];
                if (i != q.size - 1){
                    os << ",";
                }
            }
            os << ">\n";
            return os;
        }


};

#endif