// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka/asocijativnost
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> matrica(n, vector<int>(n));

    for(int r = 0; r < n; r++) {
        for(int k = 0; k < n; k++) {
            cin >> matrica[r][k];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                if(matrica[matrica[i][j]][k] != matrica[i][matrica[j][k]]) {
                    cout << "ne" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "da" << endl;
    return 0;
}