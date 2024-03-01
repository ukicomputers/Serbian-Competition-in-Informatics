#include <iostream>
using namespace std;

int main() {
    int r, k;
    cin >> r >> k;

    int brojac = 0;
    int upozorenje[k] = {};

    for(int i = 0; i < r; i++) {
        for(int a = 0; a < k; a++) {
            int tr;
            cin >> tr;
            if(tr == 0) {
                if(upozorenje[a] == 0) {
                    upozorenje[a] = 1;
                    brojac++;
                }
            } else if(i != 0) {
                if(upozorenje[a] == 1) {
                    upozorenje[a] = 2;
                    brojac--;
                }
            } else {
                upozorenje[a] = 3;
            }
        }
    }
    
    cout << brojac << endl;
    return 0;
}