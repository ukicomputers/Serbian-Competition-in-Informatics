#include <iostream>
using namespace std;

int main() {
    int unos = 0;
    cin >> unos;

    int zbir = 0;

    for(int i = 0; i < unos; i++) {
        int temp;
        cin >> temp;
        zbir += temp;
    }
    
    cout << zbir << endl;
    return 0;
}