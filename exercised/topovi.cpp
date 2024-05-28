#include <iostream>
#include <vector>
using namespace std;

void zavrsi(bool rezultat) {
    if(rezultat) {
        cout << "1" << endl;
        exit(0);
    } else {
        cout << "0" << endl;
        exit(0);
    }
}

int main() {
    int n;
    cin >> n;

    vector<bool> kolonskiNapad(n);

    for(int r = 0; r < n; r++) {
        bool redniNapad = false;
        for(int k = 0; k < n; k++) {
            int top;
            cin >> top;

            if(redniNapad && top > 0)
                zavrsi(true);
            else if(kolonskiNapad[k] && top > 0)
                zavrsi(true);
            else if(top > 0) {
                redniNapad = true;
                kolonskiNapad[k] = true;
            }
        }
    }
    
    zavrsi(false);
}