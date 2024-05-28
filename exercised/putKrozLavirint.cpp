#include <iostream>
#include <vector>
#include <stack>
using namespace std;

bool check(vector<vector<char>> &matrica, vector<vector<bool>> &presao, int &m, int &n, int noviX, int noviY) {
    return noviY < 0 || noviY >= m || noviX < 0 || noviX > n || presao[noviY][noviX] || matrica[noviY][noviX] != '.';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int m, n;
    cin >> m >> n;

    vector<vector<char>> matrica(m, vector<char>(n));

    for(int y = 0; y < m; y++)
        for(int x = 0; x < n; x++)
            cin >> matrica[y][x];

    stack<pair<int, int>> zaProveru;
    vector<vector<bool>> presao(m, vector<bool>(n));
    bool postoji;
    zaProveru.push({0, 0});

    while (!zaProveru.empty()) {
        const auto [sadX, sadY] = zaProveru.top();
        zaProveru.pop();
        
        if(sadY == m - 1 && sadX == n - 1) {
            postoji = true;
            break;
        }
        
        presao[sadY][sadX] = true;

        vector<pair<int, int>> direkcije = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        for(const auto &[dirX, dirY] : direkcije) {
            int noviX = sadX + dirX;
            int noviY = sadY + dirY;

            if(!check(matrica, presao, m, n, noviX, noviY))
                zaProveru.push({noviX, noviY});
        }
    }
    
    if(postoji == true)
        cout << "da\n";
    else
        cout << "ne\n";
    return 0;
}