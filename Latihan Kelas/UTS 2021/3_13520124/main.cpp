#include <iostream>
#include <queue>
using namespace std;

/*
    NIM: 13520124
    Nama: Owen Christian Wijaya
    UTS OOP 2021 - Main Driver untuk Priority Queue */

template <class T>
void printQueue(T pq){
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

priority_queue<int, vector<int>, greater<int>> reverseQueue(priority_queue<int> pq){
    priority_queue<int, vector<int>, greater<int> > rq;
    int initialSize = pq.size();
    for (int i = 0; i < initialSize; i++){
        rq.push(pq.top());
        pq.pop();
    }
    return rq;
};

int main(){
    priority_queue<int> q;

    // membuat heap dari bilangan integer random
    for (int i = 0; i < 50; i++){
        q.push(rand() % 100);
    }
    printQueue(q);

    // menambahkan birokrat baru dengan nilai random
    int var = rand() % 100;
    cout << "Menambahkan birokrat " << var << endl;
    q.push(var);

    // menghapus birokrat dengan nilai terbesar
    cout << "Menghapus birokrat dengan elemen tertinggi " << q.top() << endl;
    q.pop();
    printQueue(q);
    // birokrat selanjutnya adalah q.top baru
    cout << "Birokrat baru: " << q.top() << endl;

    // karena by default priority queue membentuk max heap, maka untuk pengurutan
    // dilakukan pengurutan dari terkecil hingga ke besar (membalik queue)
    cout << "Urutan birokrat dari terkecil ke terbesar: " << endl;
    printQueue(reverseQueue(q));
}