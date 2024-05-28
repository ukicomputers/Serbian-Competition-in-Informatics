#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int minD, maxO;
    int brojac = 0;

    for(int i = 0; i < n; i++) {
        int dH, dM, oH, oM;
        cin >> dH >> dM >> oH >> oM;

        if(dH < 12)
            brojac++;

        if(i == 0) {
            minD = dH * 60 + dM;
            maxO = oH * 60 + oM;
            continue;
        }

        if(dH * 60 + dM < minD)
            minD = dH * 60 + dM;
        if(oH * 60 + oM > maxO)
            maxO = oH * 60 + oM;
    }
    
    int rez = maxO - minD;
    cout << rez / 60 << " " << rez % 60 << endl;
    cout << brojac << endl;
    return 0;
}