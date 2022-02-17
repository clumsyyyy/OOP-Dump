#include "Stack.hpp"
#include <iostream>
using namespace std;

// init static variable
int Stack::n_stack = 0;

//setter const int capacity
Stack::Stack() : capacity(10){
    this->size = 0;
    this->data = new int[this->capacity];
    n_stack++;
}
// constructor with parameter
Stack::Stack(int cap) : capacity(cap){
    this->size = 0;
    this->data = new int[this->capacity];
    n_stack++;
}
// copy constructor 
Stack::Stack(const Stack &s) : capacity(s.capacity){
    this->size = s.size;
    this->data = new int[s.capacity];

    for(int i = 0; i < this->capacity; i++){
        this->data[i] = s.data[i];
    }
    n_stack++;
}

// destructor
Stack::~Stack() {
    delete[] this->data;
}

//push satu elemen x
void Stack::push(int x) {
    if(this->size == this->getCapacity()){
        cout << "Stack is full" << endl;
        return;
    }
    this->data[this->size] = x;
    this->size++;
}

//push n elemen x
void Stack::push(int x, int n){
    if (this->size + n < this->getCapacity()) {
        while (n--){
            this->data[this->size] = x;
            this->size++;
        }
    }
}

//pop elemen paling atas
int Stack::pop(){
    int top = 0;
    if (this->size > 0){
        this->size--;
        top = this->data[this->size];
    }
    return top;
}

int Stack::getCapacity(){
    return Stack::capacity;
}

int Stack::getNumOfStack(){
    return n_stack;
}

int Stack::top() const {
    if (this->size > 0) {
        return this->data[this->size - 1];
    } else {
        return 0;
    }
}

Stack Stack::operator+(const Stack& s) {
    // ini contoh sederhana
    Stack return_stack(Stack::capacity + s.capacity);
    return return_stack;
}

void Stack::ubah(){
    this->size = 1;
    this->data[0] = 9;
}
