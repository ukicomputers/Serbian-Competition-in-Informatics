#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        if(i == 0 || i == n - 1)
            cout << "+";
        else
            cout << "|";

        string glava = "-";
        if(i > 0 && i < n - 1)
            glava = ".";

        for(int x = 0; x < n - 2; x++) cout << glava;

        if(i == n - 1 && n > 1 || i == 0 && n > 1)
            cout << "+";
        else if(n > 1)
            cout << "|";

        cout << endl;
    }
    
    return 0;
}