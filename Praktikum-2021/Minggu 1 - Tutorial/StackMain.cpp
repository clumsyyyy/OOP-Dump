#include "Stack.cpp"

void coba (Stack s){
    s.ubah();
}
int main(){
    Stack s;
    s.push(2);
    s.push(3);
    cout << s.top() << endl;
    coba(s);
    cout << s.top() << endl;
}