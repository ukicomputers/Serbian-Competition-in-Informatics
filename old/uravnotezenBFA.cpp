// ok, al brute-force metod, tako da samo 20 bodova
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> segmenti(n);

    for(int i = 0; i < n; i++)
        cin >> segmenti[i];

    int brojac = 0;
    for(int i = 0; i < n; i++) {
        int zbir = 0, duzina = 0;
        for(int a = i; a < n; a++) {
            zbir += segmenti[a];
            duzina++;
            if(zbir == duzina)
                brojac++;
        }
    }
    
    cout << brojac << endl;
    return 0;
}