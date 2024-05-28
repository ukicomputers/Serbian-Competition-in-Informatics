#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    
    int k = 0;
    cin >> k;

    int ocene[k];
    for(int i = 0; i < k; i++) {
        cin >> ocene[i];
    }

    float prosek = 0.00;
    cin >> prosek;
    prosek = prosek * n;
    prosek = round(prosek);
    
    for(int i = 0; i < k; i++) {
        prosek -= ocene[i];
        n--;
    }

    prosek /= n;
    prosek = roundf(prosek * 100) / 100;
    cout << fixed << setprecision(2) << prosek << endl;
}