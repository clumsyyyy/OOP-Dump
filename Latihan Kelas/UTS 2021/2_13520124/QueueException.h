#ifndef QUEUE_EXCEPTION_HPP
#define QUEUE_EXCEPTION_HPP

#include <iostream>
using namespace std;

class QueueException{
    public:
    //pure virtual function untuk di-override fungsi bawahan
        virtual string printMessage() = 0;
};

class EnqException : public QueueException{
    private:
        string message;
    public:
        EnqException(){
            this->message = "Queue telah penuh";
        }
        string printMessage(){
            return this->message;
        }
};


class DeqException : public QueueException{
    private:
        string message;
    public:
        DeqException(){
            this->message = "Queue telah kosong";
        }
        string printMessage(){
            return this->message;
        }
};


#endif