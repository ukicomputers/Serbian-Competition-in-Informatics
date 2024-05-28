#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, q;
    cin >> n >> m >> q;

    vector<int> jedinice(m);
    for (int i = 0; i < m; ++i) {
        cin >> jedinice[i];
    }

    vector<int> matrica(n);
    for(int i = 0, j = 0; i < n; ++i) {
    	while(j < m && i >= jedinice[j])
    		++j;
    	matrica[i] = j;
    }

    for(int i = 0; i < q; ++i) {
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