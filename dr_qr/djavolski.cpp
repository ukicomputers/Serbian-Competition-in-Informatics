#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> matrica(n, vector<int>(n));

    bool magican = true;
    int zadnjiRedniZbir;

    for(int i = 0; i < n; i++) {
        int redniZbir = 0;
        for(int a = 0; a < n; a++) {
            cin >> matrica[i][a];
            redniZbir += matrica[i][a];
        }
        if(i == 0)
            zadnjiRedniZbir = redniZbir;
        else if(magican)
            if(redniZbir != zadnjiRedniZbir)
                magican = false;
    }

    int zadnjiKolonskiZbir;
    if(magican)
        for(int i = 0; i < n; i++) {
            int zbirKolone = 0;
            for(int a = 0; a < n; a++) {
                zbirKolone += matrica[a][i];
            }
            if(i == 0)
                zadnjiKolonskiZbir = zbirKolone;
            else if(zadnjiKolonskiZbir != zbirKolone) {
                magican = false;
                break;
            }
        }

    int red = 0, kolona = n / 2;
    int zadnjiDjavolski;
    bool djavolski = true;

    for(int i = 0; i < n; i++) {
        int rezultatDijagonale = 0;

        for(int a = 0; a < n; a++) {
            rezultatDijagonale += matrica[red][(kolona + a) % n];
            red++;
        }

        if(i == 0)
            zadnjiDjavolski = rezultatDijagonale;
        else if(rezultatDijagonale != zadnjiDjavolski) {
            djavolski = false;
            break;
        }

        red = 0;
        kolona++;
    }

    if(!magican && !djavolski)
        cout << "nije ni magican ni djavolski" << endl;
    else if(magican && !djavolski)
        cout << "jeste magican ali nije djavolski" << endl;
    else if(magican && djavolski)
        cout << "djavolski" << endl;
    
    return 0;
}