#include <iostream>
#include <unordered_map>
#include <cmath>
using namespace std;

void faktorizuj(int broj, unordered_map<int, int> &gde) {
    // Idemo od dva (parni je) i idemo tačno do kvadratnog korena iz broja (koliko treba proći puta)
    for(int i = 2; i <= sqrt(broj); i++) {
        while (broj % i == 0) {
            gde[i]++;
            broj /= i;
        }
    }

    // Završiti faktorizaciju zadnjim brojem
    if(broj > 1)
        gde[broj]++;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n;

    // Unos i faktorizacija brojeva
    unordered_map<int, int> brojilac(n);

    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        faktorizuj(tmp, brojilac);
    }

    cin >> m;
    unordered_map<int, int> imenilac(m);

    for(int i = 0; i < m; i++) {
        int tmp;
        cin >> tmp;
        faktorizuj(tmp, imenilac);
    }

    // Da bi smo dobili cifre iza zareza, tražimo maksimalan broj u imeniocu
    // Ali, pre toga, moramo da izbrišemo duplikate kod brojioca i da ih premestimo u imenioc
    for(auto &a : brojilac) {
        if(imenilac.find(a.first) != imenilac.end()) {
            imenilac[a.first] -= min(a.second, imenilac[a.first]); // mogli bi smo brže, al me mrzi
            if(imenilac[a.first] <= 0)
                imenilac.erase(a.first);
        }
    }

    // Provera beskonacnog broja
    // Ukoliko neki imenioc ni 2 ni 5, onda je beskonacno
    for(auto &a : imenilac) {
        if(a.first != 2 && a.first != 5) {
            cout << "Beskonacno" << endl;
            return 0;
        }
    }

    // Trazimo decimalni broj kod imenioca, iz 2 ili 5 pa gde je veći
    // Kod unordered_map na nepostojećim pozicijama je null, pa onda ne moramo proveraveti da li poz postoji
    cout << max(imenilac[2], imenilac[5]) << endl;
    return 0;
}