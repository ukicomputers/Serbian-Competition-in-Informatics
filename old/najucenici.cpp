#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int brojUnosa = 0;
    cin >> brojUnosa;

    float najOcene = 0.00;
    int ukupnoOcena = 0;

    for(int i = 0; i < brojUnosa; i++) {
        float temp = 0.00;
        cin >> temp;
        if(temp >= 4.5) {
            najOcene += temp;
            ukupnoOcena++;
        }
    }

    float zak = najOcene / ukupnoOcena;
    zak = roundf(zak * 100) / 100;

    if(ukupnoOcena > 0)
        cout << fixed << setprecision(2) << zak << endl;
    else
        cout << "-" << endl;
    
    return 0;
}