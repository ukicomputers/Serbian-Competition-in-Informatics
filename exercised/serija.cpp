#include <iostream>
using namespace std;

int main() {
    int puta, koraka;
    cin >> puta >> koraka;

    for(int i = 1; i <= puta; i++) {
        string tr;
        tr += to_string(i) + " ";
        for(int a = 2; a <= koraka - 1; a++) {
            tr += to_string(a) + " ";
        }
        tr += to_string(koraka);
        cout << tr << endl;
    }
}