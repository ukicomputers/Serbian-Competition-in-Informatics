// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka/matrica_1248
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int v, k;
    cin >> v >> k;

    vector<int> brojevi(v * k);
    
    for(int i = 0; i < v * k; i++) {
        cin >> brojevi[i];
    }
    
    int trazi = 1, traziNum = 0;
    int brojac = 0;

    auto it = brojevi.begin();

    while (true) {
        if (it == brojevi.end()) {
            if (traziNum > 0)
                break;
            it = brojevi.begin();
        }

        int br = *it;

        if (br == trazi) {
            switch(trazi) {
                case 1:
                    trazi = 2;
                    break;
                case 2:
                    trazi = 4;
                    break;
                case 4:
                    trazi = 8;
                    break;
                case 8:
                    brojac++;
                    trazi = 1;
                    break;
            }
            traziNum = 0;
            it = brojevi.erase(it);
        } else {
            ++it;
            traziNum++;
        }
    }

    cout << brojac << endl;
    return 0;
}
