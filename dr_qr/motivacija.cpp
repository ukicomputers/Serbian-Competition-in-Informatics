#include <iostream>
using namespace std;

int main() {
    float prosek = 0.00;

    for(int i = 0; i < 5; i++) {
        float br;
        cin >> br;
        prosek += br;
    }

    prosek /= float(5);

    if(prosek >= 4.4)
        cout << 5 << endl;
    else if(prosek < 4.4 && prosek >= 3.4)
        cout << 4 << endl;
    else if(prosek < 3.4 && prosek >= 2.4)
        cout << 3 << endl;
    else if(prosek < 2.4 && prosek >= 1.4)
        cout << 2 << endl;
    else if(prosek < 1.4)
        cout << 1 << endl;

    return 0;
}