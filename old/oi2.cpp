// remastered: najbrza bez TLE
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
    
int main() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> matrica(n, m);

    for(int i = 0; i < m; i++) {
        int jedinica;
        cin >> jedinica;

        for(int a = 0; a < jedinica; a++)
            matrica[a]--;
    }

    for(int i = 0; i < q; i++) {
        int upit;
        cin >> upit;
        int poz = lower_bound(matrica.begin(), matrica.end(), upit) - matrica.begin();
        if(poz < n && matrica[poz] == upit)
            cout << poz << "\n";
        else {
            int manji = (poz == 0) ? matrica[0] : matrica[poz - 1];
            int veci = (poz == n) ? matrica[n - 1] : matrica[poz];
            cout << min(abs(manji - upit), abs(veci - upit)) << "\n";
        }
    }
    
    return 0;
}