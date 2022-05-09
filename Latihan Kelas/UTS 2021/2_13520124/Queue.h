#ifndef QUEUE_H
#define QUEUE_H
#define MAX_SIZE 3
#include <iostream>
#include "QueueException.h"
using namespace std;

template <class T>
class Queue{
    protected:
        T* buffer;
        int nEff = 0;
    public:
        //default constructor
        Queue(){
            this->nEff = 0;
            this->buffer = new T[MAX_SIZE];
        }

        //destructor
        ~Queue(){
            delete[] this->buffer;
        }

        //method enqueue
        void enqueue(const T& elmt){
            try{
                if (nEff == MAX_SIZE){
                    throw EnqException();
                } else {
                    this->buffer[nEff] = elmt;
                    nEff++;
                }
            
            } catch (EnqException& e){
                cout << e.printMessage() << endl;
            }
        }
        
        //method dequeue
        void dequeue(T& res){
            try{
                if (nEff == 0){
                    throw DeqException();
                } else {
                    res = this->buffer[0];
                    nEff--;
                    for (int i = 0; i < nEff; i++){
                        this->buffer[i] = this->buffer[i+1];
                    }
                }
            } catch (DeqException& d){
                cout << d.printMessage() << endl;
            }
        }

        //operator overloadding
        friend std::ostream& operator << (ostream& os, Queue<T> q){
            os << "[";
            for (int i = 0; i < q.nEff; i++){
                os << q.buffer[i];
                if (i != q.nEff - 1){
                    os << ", ";
                }
            }
            os << "]\n";
            return os;
        }
};
#endif