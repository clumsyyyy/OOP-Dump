#include "Paper.hpp"
#include <iostream>
using namespace std;

Paper::Paper(char c){
    this->name = c;
    this->n_fold = 0;
    cout << "new paper " << c << " created" << endl;
}

Paper::Paper(const Paper& p){
    this->name = p.name;
    this->n_fold = p.n_fold;
    cout << "new paper copy-created" << endl;
}

Paper::~Paper(){
    cout << "deleted paper " << this->name << endl;
}

void Paper::fold(){
    cout << "fold paper!" << endl;
    this->n_fold++;
}

void Paper::glue(){
    cout << "glue paper!" << endl;
}

void Paper::setName(char c){
    cout << "paper name set to " << c << endl;
    this->name = c;
}