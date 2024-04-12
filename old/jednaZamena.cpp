#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int zamene = 0;

    for(int i = 0; i < a.size(); i++) {
        char c1 = a[i];
        char c2 = b[i];
        if(c1 != c2)
            zamene++;
    }
    
    // doradi za dva slova

    if(zamene == 0 || zamene == 2)
        cout << "da" << endl;
    else
        cout << "ne" << endl;

    return 0;
}