#include <iostream>
using namespace std;

int main() {
    int duzinaStaze;
    cin >> duzinaStaze;

    int skracenje;
    cin >> skracenje;

    int brojZvonca;
    cin >> brojZvonca;

    int koordinateZvona[brojZvonca] = {}; 
    int rez[brojZvonca] = {};

    for(int i = 0; i < brojZvonca; ++i) {
        cin >> koordinateZvona[i];
    }

    int x = 0;
    int zvonoID = 0;
    bool pravac = false; // false za napred, true za nazad

    int pp1 = 0;
    int pp2 = duzinaStaze;
    int tp = duzinaStaze;

    while(duzinaStaze <= skracenje) {
        if(x == koordinateZvona[zvonoID]) {
            rez[zvonoID]++;

            if(!pravac && zvonoID + 1 < brojZvonca)
                zvonoID++;
            else if(pravac && zvonoID - 1 < brojZvonca)
                zvonoID--;
        }

        if(x == tp) {
            pravac = !pravac;
            duzinaStaze -= skracenje;
            
            if(pravac) {
                pp1 += skracenje;
                tp = pp1;
                continue;
            } else {
                pp2 -= skracenje;
                tp = pp2;
                continue;
            }
        }

        if(!pravac)
            x++;
        else
            x--;
    }

    for(int i = 0; i < brojZvonca; i++) {
        cout << rez[i] << endl;
    }
    
    return 0;
}