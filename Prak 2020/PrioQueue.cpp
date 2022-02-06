#include "PrioQueue.hpp"
#include <iostream>

/*
    NIM: 13520124
    Nama: Owen Christian Wijaya
    Topik: Tutorial OOP 1
    Deskripsi: Implementasi PrioQueue
*/

PrioQueue::PrioQueue() {
  this->neff = 0;
  this->maxEl = 20;
  this->queue = new PQElmt[this->maxEl];
}

PrioQueue::PrioQueue(int maxEl) {
  this->neff = 0;
  this->maxEl = maxEl;
  this->queue = new PQElmt[this->maxEl];
}

PrioQueue::PrioQueue(const PrioQueue& pq) {
  this->neff = pq.neff;
  this->maxEl = pq.maxEl;
  this->queue = new PQElmt[this->maxEl];
  for (int i = 0; i < this->maxEl; i++) {
    this->queue[i] = pq.queue[i];
  }
}

PrioQueue::~PrioQueue() {
  delete[] this->queue;
}

void PrioQueue::push(PQElmt el) {
  int idx = this->neff;
  while (idx > 0 && el > this->queue[idx - 1]) {
    this->queue[idx] = this->queue[idx - 1];
    idx--;
  }
  this->queue[idx] = el;
  this->neff += 1;
}

PQElmt PrioQueue::pop() {
  PQElmt val = this->queue[0];
  for (int i = 0; i < this->neff - 1; i++) {
    this->queue[i] = this->queue[i + 1];
  }
  this->neff -= 1;
  return val;
}

PQElmt PrioQueue::operator[](int k) {
  if (k >= 0 && k < this->neff){
    return this->queue[k];
  } else {
    return {0, 0};
  }
}
PrioQueue operator+(const PrioQueue& a, const PrioQueue& b) {
    PrioQueue temp(a.maxEl + b.maxEl);
    int aCount = 0;
    int bCount = 0;
    //switching push
    while (aCount < a.neff && bCount < b.neff) {
        if (a.queue[aCount] < b.queue[bCount]) {
            temp.push(a.queue[aCount]);
            aCount++;
        } else {
            temp.push(b.queue[bCount]);
            bCount++;
        }
    }
    // jika masih ada yang belum terisi, push sisanya
    while (aCount < a.neff) {
        temp.push(a.queue[aCount]);
        aCount++;
    }
    while (bCount < b.neff){
        temp.push(b.queue[bCount]);
        bCount++;
    }

    return temp;
}