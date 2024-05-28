#include <iostream>
using namespace std;

int main() {
    int visina = 0;
    cin >> visina;

    if(visina >= (240 + 24))
        cout << 0 << endl;
    else
        cout << (240 + 24) - visina << endl;
}