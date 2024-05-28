#include <iostream>
#include <vector>
using namespace std;

bool isti(int lista[], int velicina) {
    int prosli = lista[0];

    for(int i = 0; i < velicina; i++) {
        if(lista[i] != prosli)
            return false;
    }

    return true;
}

int main() {
    int brD;
    cin >> brD;

    int rezultat[brD];
    vector<vector<int>> kocka(brD, vector<int>(brD));

    for(int i = 0; i < brD; i++) {
        for(int a = 0; a < brD; a++) {
            cin >> kocka[i][a];
        }
    }

    int red, kolona = 0;

    for(int i = 0; i < brD; i++) {
        int rezultatDijagonale = 0;

        for(int a = 0; a < brD; a++) {
            rezultatDijagonale += kocka[red][(kolona + a) % brD];
            red++;
        }

        red = 0;
        kolona++;

        cout << rezultatDijagonale << endl;
        rezultat[i] = rezultatDijagonale;
    }

    if(isti(rezultat, brD))
        cout << "da" << endl;
    else
        cout << "ne" << endl;
        
    return 0;
}