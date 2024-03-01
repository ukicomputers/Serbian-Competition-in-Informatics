#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> cifre(4);
    string malo, veliko = "";

    for(int i = 0; i < 4; i++) {
        cin >> cifre[i];
    }

    vector<int> kopija = cifre;
    sort(cifre.begin(), cifre.end(), greater<int>());
    sort(kopija.begin(), kopija.end());

    if(kopija[0] == 0) {
        int pNajmanji, p = 0;

        for(int i = 0; i < 4; i++) {
            if(kopija[i] < pNajmanji && kopija[i] > 0 && i != 0) {
                pNajmanji = kopija[i];
                p = i;
            } else if(kopija[i] > 0 && pNajmanji == 0) {
                pNajmanji = kopija[i];
                p = i;
            }
        }

        swap(kopija[0], kopija[p]);
    }

    for(int i = 0; i < 4; i++) {
        veliko += to_string(cifre[i]);
        malo += to_string(kopija[i]);
    }

    cout << stoi(veliko) - stoi(malo) << endl;
    return 0;
}