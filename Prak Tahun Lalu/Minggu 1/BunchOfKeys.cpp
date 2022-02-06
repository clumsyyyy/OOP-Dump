#include "BunchOfKeys.hpp"

BunchOfKeys::BunchOfKeys(){
    this->n_keys = 0;
}

void BunchOfKeys::add(int n){
    this->n_keys += n;
}

void BunchOfKeys::shake(){
    if (this->n_keys > 1){
        for (int i = 0; i < this->n_keys; i++){
            cout << "peepee" << endl;
        }   
    } else {
        cout << "gare kontol" << endl;
    }
}