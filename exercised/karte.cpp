#include <iostream>
using namespace std;

int main() {
    int godine = 0;
    cin >> godine;

    int stanovanjeDana = 0;
    cin >> stanovanjeDana;

    int cena = 0;
    int kasa = 0;

    if(godine < 5)
        cena = 0;
    else if(godine >= 5 && godine <= 12)
        cena = 2800;
    else if(godine >= 13 && godine <= 64)
        cena = 3500;
    else if(godine >= 65)
        cena = 3200;

    if(stanovanjeDana > 10) {
        stanovanjeDana -= 10;
        kasa += 10 * cena;
        kasa += stanovanjeDana * (cena / 2);
    } else {
        kasa += stanovanjeDana * cena;
    }
    
    cout << kasa << endl;
    return 0;
}