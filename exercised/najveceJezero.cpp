#include <iostream>
#include <vector>
#include <stack>
using namespace std;

bool izvanGranica(int &x, int &y, int &v, int &k) {
    return x < 0 || x >= k || y < 0 || y >= v;
}

bool uMoru(int &x, int &y, int &v, int &k) {
    return x == 0 || x == k - 1 || y == 0 || y == v - 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int v, k;
    cin >> v >> k;

    vector<vector<char>> matrica(v, vector<char>(k));

    for(int y = 0; y < v; y++)
        for(int x = 0; x < k; x++)
            cin >> matrica[y][x]; // sad znam, ako je vec tipa char, ne moramo getchar(), samo cin >>
        
    // Potrebne liste
    int maksVelicina = 0;
    vector<vector<bool>> posete(v, vector<bool>(k));

    // Novi nacin upotrebe, stek za DFS
    for(int y = 0; y < v; y++) {
        for(int x = 0; x < k; x++) {
            // Ako je ovo tacka, mozda je jezero, proveravamo
            if(matrica[y][x] == '.' && !posete[y][x]) {
                int velicina = 0;
                bool naMoru = false;

                stack<pair<int, int>> naProveri;
                naProveri.push({x, y}); // trenutna koordinata

                // super sto nije rekurzija
                while(!naProveri.empty()) {
                    auto [sadX, sadY] = naProveri.top();
                    naProveri.pop();

                    if(posete[sadY][sadX])
                        continue;
                    
                    posete[sadY][sadX] = true;
                    velicina++; // zato sto smo sad na tacki

                    // mozemo da potvrdimo da je tacka, jer je ovo dfs, i nece ici ispod Xeva
                    if(uMoru(sadX, sadY, v, k))
                        naMoru = true;

                    const vector<pair<int, int>> direkcije = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
                    for(const auto &[dirX, dirY] : direkcije) {
                        int noviX = sadX + dirX;
                        int noviY = sadY + dirY;

                        // steta vremena, al moramo da oznacimo da smo bili
                        if(!izvanGranica(noviX, noviY, v, k) && matrica[noviY][noviX] == '.' && !posete[noviY][noviX])
                            naProveri.push({noviX, noviY});
                    }
                }

                // ako nije na moru, uporedjujemo maks velicinu
                if(!naMoru)
                    maksVelicina = max(maksVelicina, velicina);
            }
        }
    }
    
    cout << maksVelicina << "\n";
    return 0;
}
