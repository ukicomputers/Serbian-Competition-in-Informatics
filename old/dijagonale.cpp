#include <iostream>
#include <vector>
using namespace std;

bool isti(int pr[], int duz) {
    int prosla = pr[0];
    
    for(int i = 0; i < duz; i++) {
        if(pr[i] != prosla)
            return false;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> matrica(n, vector<int>(n));
    int rez[n];
    
    for(int i = 0; i < n; i++) {
        for(int a = 0; a < n; a++) {
            cin >> matrica[i][a];
        }
    }

    int red, kolona = 0;

    for(int i = 0; i < n; i++) {
        int rezD = 0;

        for(int a = 0; a < n; a++) { 
            rezD += matrica[red][(a + kolona) % n];
            red++;
        }

        red = 0;
        kolona++;

        cout << rezD << endl;
        rez[i] = rezD;
    }

    if(isti(rez, n))
        cout << "da" << endl;
    else
        cout << "ne" << endl;
    
    return 0;
}