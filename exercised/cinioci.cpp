#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int broj;
    cin >> broj;

    for(int i = 2; i <= sqrt(broj); i++) {
        while(broj % i == 0) {
            cout << i << " ";
            broj /= i;
        }
    }

    if(broj > 1)
        cout << broj;
    
    cout << "\n";
    return 0;
}