#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int minH, minM;
    int maxH, maxM;
    int m12 = 0;

    for(int i = 0; i < n; i++) {
        int miH, miM, maH, maM;
        cin >> miH >> miM >> maH >> maM;

        if(miH < 12)
            m12++;

        if(i == 0) {
            minH = miH;
            minM = miM;
            maxH = maH;
            maxM = maM;
            continue;
        }

        if(minM > miM && minH >= miH || minH > miH) {
            minH = miH;
            minM = miM;
        }

        if(maM > maxM && maxH >= maH || maH > maxH) {
            maxH = maH;
            maxM = maM;
        }
    }

    int h = maxH - minH;
    int m = maxM - minM;
    
    if(m < 0) {
        h--;
        m = 60 - abs(m);
    }

    cout << h << " " << m << endl;
    cout << m12 << endl;
    return 0;
}