#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main() {
    int duzinaStaze, skracenje, brojZvonca;
    cin >> duzinaStaze >> skracenje >> brojZvonca;

    int koordinateZvonca[brojZvonca];

    int zazvonilo[brojZvonca];
    memset(zazvonilo, 0, sizeof(zazvonilo));

    for(int i = 0; i < brojZvonca; i++) {
        cin >> koordinateZvonca[i];
    }

    bool smer = false; // false napred, true nazad

    int lokNapred = duzinaStaze;
    int lokNazad = 0;

    int koordTrenZvonca = 0;
    int x = 0;

    int pt = duzinaStaze; // predji trenutno

    while(duzinaStaze > 0) {
        if(koordinateZvonca[koordTrenZvonca] == x) {
            zazvonilo[koordTrenZvonca]++;

            if(!smer && koordTrenZvonca + 1 < brojZvonca)
                koordTrenZvonca++;
            else if(smer && koordTrenZvonca - 1 >= 0)
                koordTrenZvonca--;
        }

        if(x == pt) {
            smer = !smer;
            duzinaStaze -= skracenje;

            if (smer) {
                lokNazad += skracenje;
                pt = lokNazad;
                continue;
            } else {
                lokNapred -= skracenje;
                pt = lokNapred;
                continue;
            }
        }

        if(!smer)
            x++;
        else
            x--;
    }
    
    return 0;
}