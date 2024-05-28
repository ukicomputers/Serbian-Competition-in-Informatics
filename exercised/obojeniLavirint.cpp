// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka2/obojeni_lavirint
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool dfs(vector<vector<int>> &matrica, int x, int y, int sadaMora, int &n, int &m, vector<vector<bool>> &preso) {
    if
    (
        x < 0 || // normalni location checkeri
        x > m - 1 ||
        y < 0 ||
        y > n - 1 ||
        matrica[y][x] != sadaMora ||
        preso[y][x]
    ) return false;

    preso[y][x] = true;
    if(y == 0) return true;
    
    if(sadaMora == 4) sadaMora = 1;
    else sadaMora++;

    if
    (
        dfs(matrica, x - 1, y, sadaMora, n, m, preso) ||
        dfs(matrica, x + 1, y, sadaMora, n, m, preso) ||
        dfs(matrica, x, y - 1, sadaMora, n, m, preso) ||
        dfs(matrica, x, y + 1, sadaMora, n, m, preso)
    ) return true;
    else return false;
}

int main() {    
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrica(n, vector<int>(m));
    vector<vector<bool>> preso(n, vector<bool>(m));
    vector<int> moguceJed;

    for(int y = 0; y < n; y++) {
        for(int x = 0; x < m;) {
            char c = getchar();

            if(c == '\n')
                continue;
            
            matrica[y][x] = c - '0';

            if(y == n - 1 && matrica[y][x] == 1)
                moguceJed.push_back(x);

            x++;
        }
    }

    for(int &jed : moguceJed) {
        if(!dfs(matrica, jed, n - 1, 1, n, m, preso))
            continue;
        else {
            cout << "da\n";
            return 0;
        }
    }
    
    cout << "ne\n";
    return 0;
}