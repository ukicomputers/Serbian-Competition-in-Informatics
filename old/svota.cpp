#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrica(m, vector<int>(n));
    int r = 0, k = 0;

    for(int a = 0; a < m; a++) {
        int redniZbir = 0;
        for(int b = 0; b < n; b++) {
            cin >> matrica[a][b];
            if((redniZbir + matrica[a][b] < redniZbir && redniZbir + matrica[a][b] >= 0) || matrica[a][b] > 0)
                redniZbir += matrica[a][b];
        }
        if(redniZbir < r || a == 0)
            r = redniZbir;
    }
    
    for(int b = 0; b < n; b++) {
        int zbirKolone = 0;
        for(int a = 0; a < m; a++) {
            if((zbirKolone + matrica[a][b] < zbirKolone && zbirKolone + matrica[a][b] >= 0) || matrica[a][b] > 0)
                zbirKolone += matrica[a][b];
        }
        if(zbirKolone < k || b == 0)
            k = zbirKolone;
    }

    cout << r << endl << k << endl;
    return 0;
}