#include <iostream>
using namespace std;

int main() {
    int broj = 0;
    cin >> broj;
    
    broj += 8;
    broj *= 2;
    broj -= 10;

    if(broj % 8 > 0) {
        cout << "greska" << endl;
        return (-1);
    }

    broj /= 8;

    cout << broj << endl;
    return 0;
}