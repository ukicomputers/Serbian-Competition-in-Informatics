#include <iostream>
#include <vector>
using namespace std;

void nema() {
    cout << "-" << endl;
    exit(0);
}

void zameni(vector<vector<string>> &matrica, int y, int x, int defY, int defX) {
    if 
    (                 
        y < 0 ||
        y > matrica.size() - 1 ||
        x < 0 ||
        x > matrica[0].size() - 1 ||
        matrica[y][x] == "c" ||
        (matrica[y][x] == "." && !(y == defY && x == defX))
    ) return;

    if(x == defX || y == defY)
        matrica[y][x] = "c";
    else
        return;
    
    zameni(matrica, y + 1, x, defY, defX);
    zameni(matrica, y, x - 1, defY, defX);
    zameni(matrica, y - 1, x, defY, defX);
    zameni(matrica, y, x + 1, defY, defX);
}

int main() {
    vector<vector<string>> tabla(8, vector<string>(8));

    for(int r = 0; r < 8; r++) {
        for(int k = 0; k < 8; k++) {
            cin >> tabla[r][k];
        }
    }

    int r, k;
    cin >> r >> k;

    if(tabla[r][k] != ".")
        nema();

    /*if
    (
        tabla[max(0, r - 1)][k] != "b" ||
        tabla[r + 1][k] != "b" ||
        tabla[r][max(0, k - 1)] != "b" ||
        tabla[r][k + 1] != "b"
    ) nema();*/

    zameni(tabla, r, k, r, k);

    for(int r = 0; r < 8; r++) {
        for(int k = 0; k < 8; k++) {
            cout << tabla[r][k] << " ";
        }
        cout << endl;
    }

    return 0;
}