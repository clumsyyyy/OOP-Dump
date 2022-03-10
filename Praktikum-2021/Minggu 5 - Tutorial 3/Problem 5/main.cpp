#include <map>
#include <iostream>
using namespace std;

int main(){
    int n;
    int m;
    string word;
    map<string, int> hojun;


    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> word;
        hojun[word]++;
    }

    cin >> m;
    for (int i = 0; i < m; i++){
        cin >> word;
        if (hojun.find(word) != hojun.end()){
            hojun[word]--;
        }
    }

    for (auto word = hojun.begin(); word != hojun.end(); word++){
        for (int i = 0; i < word->second; i++){
            cout << word->first << endl;
        }
    }
    return 0;
}