#include <iostream>
#include <vector>
using namespace std;

int dfs(vector<vector<int>> &matrica, int x, int y, int &n, int &m) {
    if
    (
        x < 0 || // normalni location checkeri
        x > m - 1 ||
        y < 0 ||
        y > n - 1 ||
        matrica[y][x] == 0 // ukoliko je to ne zarazena oblast
    ) return 0;

    matrica[y][x] = 0; // posto se ne ponavlja, mozemo da ga stavimo na 0 kao da smo ga posetili
    int brojac = 1; // ponovo, zato sto je ovo zarazeno polje

    // I sve tako u drugim smerovima
    brojac += dfs(matrica, x, y + 1, n, m);
    brojac += dfs(matrica, x, y - 1, n, m);
    brojac += dfs(matrica, x + 1, y, n, m);
    brojac += dfs(matrica, x - 1, y, n, m);

    return brojac;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrica(n, vector<int>(m));

    for(int y = 0; y < n; y++)
        for(int x = 0; x < m; x++)
            cin >> matrica[y][x];

    int brojac = 0;

    // Nazalost, moramo ovako, jer DFS ce doci do samo jedne oblasti
    // A i mrzi me da implementujem gde sam prosli put stao, pa da gledam u direkcije...
    for(int y = 0; y < n; y++) {
        for(int x = 0; x < m; x++) {
            if(matrica[y][x] == 1) {
                brojac = max(dfs(matrica, x, y, n, m), brojac);
            }
        }
    }

    cout << brojac << "\n";
    return 0;
}