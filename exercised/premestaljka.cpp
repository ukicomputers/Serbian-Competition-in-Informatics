// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka/premestaljka
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int v, k;
    cin >> v >> k;

    int pozNX, pozNY;
    vector<vector<int>> matrica(v, vector<int>(k));

    for(int r = 0; r < v; r++) {
        for(int o = 0; o < k; o++) {
            int br;
            cin >> br;
            if(br == 0) {
                pozNX = o;
                pozNY = r;
            }
            matrica[r][o] = br;
        }
    }
    
    string potezi;
    cin >> potezi;

    for(char &c : potezi) {
        if(c == 'D') {
            if(pozNX - 1 >= 0) {
                swap(matrica[pozNY][pozNX], matrica[pozNY][pozNX - 1]);
                pozNX--;
            }
        } else if(c == 'L') {
            if(pozNX + 1 < k) {
                swap(matrica[pozNY][pozNX], matrica[pozNY][pozNX + 1]);
                pozNX++;
            }
        } else if(c == 'N') {
            if(pozNY - 1 >= 0) {
                swap(matrica[pozNY][pozNX], matrica[pozNY - 1][pozNX]);
                pozNY--;
            }
        } else if(c == 'V') {
            if(pozNY + 1 < v) {
                swap(matrica[pozNY][pozNX], matrica[pozNY + 1][pozNX]);
                pozNY++;
            }
        }
    }

    for(int r = 0; r < v; r++) {
        for(int o = 0; o < k; o++) {
            cout << matrica[r][o] << " ";
        }
        cout << endl;
    }

    return 0;
}