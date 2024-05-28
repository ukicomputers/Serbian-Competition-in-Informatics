#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int n2 = n * 2;
    
    string zatRed(n2, '*');
    string jp = "*";
    for(int i = 0; i < n - 2; i++) jp += ".";
    jp += "*";

    string punTekst;

    for(int i = 0; i < n; i++) {
        if(i == 0 || i == n - 1) {
            punTekst += zatRed;
            punTekst += "\n";
            continue;
        }
        punTekst += jp;
        punTekst += jp;
        punTekst += "\n";
    }

    cout << punTekst << punTekst << endl;
    return 0;
}