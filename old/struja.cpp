#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
    int brojDana;
    float cenaJedneStruje;
    cin >> brojDana >> cenaJedneStruje;

    float potrosenaStruja[brojDana];

    for(int i = 0; i < brojDana; i++) {
        cin >> potrosenaStruja[i];
    }

    int boraviloOsoba;
    cin >> boraviloOsoba;

    float osobaPoDanu[brojDana];
    memset(osobaPoDanu, 0.00, sizeof(osobaPoDanu));

    for(int i = 0; i < boraviloOsoba; i++) {
        int pocetak, kraj;
        cin >> pocetak >> kraj;

        for(int a = pocetak; a <= kraj; a++) {
            osobaPoDanu[a - 1]++;
        }
    }

    cout << fixed << setprecision(2);

    for(int i = 0; i < brojDana; i++) {
        if(osobaPoDanu[i] == 0) {
            cout << 0.00 << endl;
            continue;
        }

        cout << (potrosenaStruja[i] * cenaJedneStruje) / osobaPoDanu[i] << endl;
    }

    return 0;
}