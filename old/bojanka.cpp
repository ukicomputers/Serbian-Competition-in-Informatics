// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/flood_fill
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void oboji(vector<vector<string>> &matrica, int y, int x, int &m, int &n, string sta, string &boja) {
    if
    (
        y < 0 ||
        y > m - 1 ||
        x < 0 ||
        x > n - 1 ||
        matrica[y][x] != sta
    ) return;

    matrica[y][x] = boja;

    oboji(matrica, y - 1, x, m, n, sta, boja);
    oboji(matrica, y + 1, x, m, n, sta, boja);
    oboji(matrica, y, x - 1, m, n, sta, boja);
    oboji(matrica, y, x + 1, m, n, sta, boja);
}

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<string>> matrica(m, vector<string>(n));

    for(int r = 0; r < m; r++) {
        string red;
        cin >> red;
        copy(red.begin(), red.end(), matrica[r].begin());
    }
    
    int v, k;
    string u;
    cin >> v >> k;
    cin >> u;

    if(u == "x")
        oboji(matrica, v, k, m, n, ".", u);
    else
        oboji(matrica, v, k, m, n, "x", u);

    for(int r = 0; r < m; r++) {
        for(int k = 0; k < n; k++) {
            cout << matrica[r][k];
        }
        cout << endl;
    }

    return 0;
}