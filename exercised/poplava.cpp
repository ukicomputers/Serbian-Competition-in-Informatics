#include <iostream>
using namespace std;

int main() {
    int r, k;
    cin >> r >> k;
    int povrsine[r * k];

    for(int i = 0; i < r * k; i++) {
        cin >> povrsine[i];
    }

    int jedinica;
    cin >> jedinica;

    int kolicina, pokrivena = 0;

    for(int i = 0; i < r * k; i++) {
        if(povrsine[i] < jedinica) {
            if(povrsine[i] < 0) {
                kolicina += jedinica;
            } else {
                kolicina += jedinica - povrsine[i];
            }
        }
        if(povrsine[i] <= jedinica)
            pokrivena++;
    }
    
    cout << kolicina << endl << pokrivena << endl;
    return 0;
}