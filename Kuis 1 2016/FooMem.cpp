#include "FooMem.hpp"
#include <iostream>
using namespace std;

FooMem::FooMem(){
    this->mem = new int[MAX];
    this->left = -1;
    this->right = MAX;
    this->size = MAX;
    cout << "default ctor initialized" << endl;
}

FooMem::FooMem(int _s){
    if (_s <= MAX){
        this->mem = new int[_s];
        this->left = -1;
        this->right = _s;
        this->size = _s;
        for(int i = 0; i < this->size; i++){
            this->mem[i] = 0;
        }
        cout << "user defined ctor initialized, size: " << _s << endl;
    } else {
        cout << "size larger than max value" << endl;
    }
}

FooMem::FooMem(FooMem& F){
    this->mem = F.mem;
    this->left = F.left;
    this->right = F.right;
    this->size = F.size;
    cout << "copy ctor initialized" << endl;
}

FooMem::~FooMem(){
    delete[] this->mem;
    cout << "destructor called" << endl;
}

FooMem& FooMem::operator = (FooMem& F){
    this->mem = F.mem;
    this->left = F.left;
    this->right = F.right;
    this->size = F.size;
    cout << "operator = called" << endl;
    return *this;
}

int FooMem::GetLeft(){
    return this->left;
}

int FooMem::GetRight(){
    return this->right;
}

bool FooMem::isEmpty() const{
    return (this->left == -1 && this->right == this->size);

}

bool FooMem::isFull() const{
    return (this->left == this->right - 1);
}

void FooMem::Add(int x){
    if (!this->isFull()){
        int limit = this->size / 2;
        if ((left + 1) > (size - right) && this->right - 1 > limit){
            this->mem[this->right] = x;
            this->right--;
        } else if ((left + 1) <= (size - right) && this->left + 1 < limit){
            this->left++;
            this->mem[this->left] = x;
        }
        cout << "added " << x << endl;
    } else {
        cout << "mem full" << endl;
    }
}

int FooMem::Del(){
    int x = 0;
    if (!this->isEmpty()){
        if ((left + 1) > (size - right)){
            x = this->mem[this->left];
            this->mem[this->left] = 0;
            this->left--;
        } else if ((left + 1) <= (size - right)){
            int x = this->mem[this->right];
            this->mem[this->right] = 0;
            this->right++;
        } 
        cout << "del " << x << endl;
    } else {
        cout << "mem empty" << endl;
    }
    return x;
}

void FooMem::Print(){
    for(int i = 0; i <= this->size; i++){
        cout << this->mem[i] << " ";
    }
    cout << endl;
}