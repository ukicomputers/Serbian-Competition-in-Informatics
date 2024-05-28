#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int nosivost, brP;
    cin >> nosivost >> brP;

    vector<pair<int, int>> snabdevi(brP);
    int rastojanje = 0;

    for(int i = 0; i < brP; i++) {
        int rast, roba;
        cin >> rast >> roba;
        snabdevi[i].first = rast;
        snabdevi[i].second = roba;
    }
    
    while(!snabdevi.empty()) {
        auto prIt = snabdevi.begin();
        auto pr = *prIt;

        if(pr.second > nosivost) {
            rastojanje += pr.first * round(pr.second / nosivost);
            snabdevi.erase(prIt);
        } else {
            int preso = pr.first;
            int nosi = pr.second;
            snabdevi.erase(prIt);

            for(; prIt != snabdevi.end();) {
                int sad = prIt->second;
                int sadTreba = sad + nosi;

                if(sadTreba <= nosivost) {
                    nosi = sadTreba;
                    preso += prIt->first;
                    snabdevi.erase(prIt);
                } else if(sad <= nosivost) {
                    int puta = 2;
                    if(prIt == snabdevi.end() - 1)
                        puta = 1;
                    preso += prIt->first * puta;
                    nosi = 0;
                    snabdevi.erase(prIt);
                } else {
                    break;
                }
            }

            rastojanje += preso;
        }
    }

    cout << rastojanje + 1 << endl;
    return 0;
}