#include <iostream>
#include <vector>
using namespace std;

int main() {
    int v, k;
    cin >> v >> k;

    vector<vector<int>> matrica(v, vector<int>(k));

    int pX, pY;

    for(int i = 0; i < v; i++) {
        for(int a = 0; a < k; a++) {
            cin >> matrica[i][a];
            if(matrica[i][a] == 0) {
                pX = a;
                pY = i;
            }
        }
    }

    string premestaj;
    cin >> premestaj;

    for(int i = 0; i < premestaj.length(); i++) {
        if(premestaj[i] == 'L') {
            swap(matrica[pY][pX - 1], matrica[pY][pX]);
            pX--;
        } else if(premestaj[i] == 'D') {
            swap(matrica[pY][pX + 1], matrica[pY][pX]);
            pX++;
        } else if(premestaj[i] == 'V') {
            swap(matrica[pY - 1][pX], matrica[pY][pX]);
            pY--;
        } else if(premestaj[i] == 'N') {
            swap(matrica[pY + 1][pX], matrica[pY][pX]);
            pY++;
        }
    }

    /*for(int i = 0; i < v - 1; i++) {
        for(int a = 0; a < k - 1; a++) {
            cout << matrica[i][k] << " ";
        }
        cout << matrica[i][k - 1] << endl;
    }*/
}