#include <iostream>
using namespace std;

char abcd = 'a';

int main() {
    int red, kol;
    cin >> red >> kol;

    for(int r = red; r > 0; r--) {
        for(int k = 0; k < kol - 1; k++) {
            cout << char(abcd + k) << r << " ";
        }
        cout << char(abcd + (kol - 1)) << r << endl;
    }
    
    return 0;
}