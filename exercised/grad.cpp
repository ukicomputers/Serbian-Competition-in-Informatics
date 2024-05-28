#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;

    int zbir = 0;

    for(int i = 0; i < n; i++) {
        string sifra;
        cin >> sifra;
        
        char a = '\0';

        for(char c : sifra) {
            if(isdigit(c)) {
                a = c;
                break;
            }
        }
        
        char b = '\0';
        
        for(auto it = sifra.rbegin(); it != sifra.rend(); ++it) {
            if(isdigit(*it)) {
                b = *it;
                break;
            }
        }

        string c;
        c += a;
        c += b;

        zbir += stoi(c);
    }

    cout << zbir << endl;
    return 0;
}