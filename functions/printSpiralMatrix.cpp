#include <iostream>
#include <vector>
using namespace std;

void printMatrixClockwise(const vector<vector<int>> &matrica, string end) {  
    int gore = 0, dole = matrica.size() - 1;
    int levo = 0, desno = matrica[0].size() - 1;

    if(dole < 0 || desno < 0)
        return;

    while(gore <= dole && levo <= desno) {
        for(int i = levo; i <= desno; i++) {
            cout << matrica[gore][i] << end;
        }
        gore++;

        for(int i = gore; i <= dole; i++) {
            cout << matrica[i][desno] << end;
        }
        desno--;

        if(gore <= dole) {
            for(int i = desno; i >= levo; i--) {
                cout << matrica[dole][i] << end;
            }
            dole--;
        }

        if(levo <= desno) {
            for(int i = dole; i >= gore; i--) {
                cout << matrica[i][levo] << end;
            }
            levo++;
        }
    }
}