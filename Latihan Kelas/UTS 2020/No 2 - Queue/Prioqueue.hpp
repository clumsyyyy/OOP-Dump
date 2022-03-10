#ifndef PRIOQUEUE_HPP
#define PRIOQUEUE_HPP
#include <iostream>
#include "Queue.hpp"
using namespace std;

template <class T>
class Prioqueue : public Queue<T> {
    private:
        int* prio;
    public:
        // default constructor
        Prioqueue() : Queue<T>(){
            this->prio = new int[10];
        }

        ~Prioqueue() {
            delete[] this->prio;
        }

        void enqueue(const T& elmt, int p){
            if (this->size == 10){
                throw "Maximum size exceeded";
            } else {
                int i = 0;
                while (i < this->size){
                    if (p > prio[i]){
                        break;
                    } else {
                        i++;
                    }
                }
                for (int j = this->size - 1; j >= i; j--){
                    this->buffer[j + 1] = this->buffer[j];
                    this->prio[j + 1] = this->prio[j];
                }
                this->buffer[i] = elmt;
                this->prio[i] = p;
                this->size++;
                cout << "Enqueued " << elmt << endl;
                this->print();
            }
        } 

        void dequeue(T& res){
            if (this->size == 0){
                throw "yepcock";
            } else {
                res = this->buffer[0];
                this->size--;
                for (int i = 0; i < this->size; i++){
                    this->buffer[i] = this->buffer[i + 1];
                    this->prio[i] = this->prio[i + 1];
                }
                cout << "Dequeued " << res << endl;
                this->print();
            }
        }
        void print(){
            Queue<T>::print();
            for (int i = 0; i < this->size; i++){
                cout << this->prio[i] << " ";
            }
            cout << " " << endl;
        }

        // friend std::ostream& operator << (ostream& os, Queue<T>& q){
        //     os << "<";
        //     for (int i = 0; i < 10; i++){
        //         os << q.getBuf[i] << " ";
        //     }
        //     os << ">";
        //     return os;
        // }
};
#endif