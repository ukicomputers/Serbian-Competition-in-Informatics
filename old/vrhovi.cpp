#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int br[n];

    for(int i = 0; i < n; i++) {
        cin >> br[i];
    }

    int brojac = 0;

    for(int i = 1; i < n - 1; i++) {
        if(br[i] > br[i - 1] && br[i] > br[i + 1])
            brojac++;
    }

    if(br[0] > br[1])
        brojac++;

    if(br[n - 1] > br[n - 2])
        brojac++;

    cout << brojac << endl;
    return 0;
}