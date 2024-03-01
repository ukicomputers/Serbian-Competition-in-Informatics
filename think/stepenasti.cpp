#include <iostream>
using namespace std;

void ispisi(int lista[], int n) {
    for(int i = 0; i < n - 1; i++)
        cout << lista[i] << " ";
    cout << lista[n - 1] << endl;
}

int main() {
    int n;
    cin >> n;

    int lista[n];
    for(int i = 0; i < n; i++)
        lista[i] = 1;

    ispisi(lista, n);
    int pozicija = n;

    while(lista[n - 1] != n) {
        pozicija--;
        if(pozicija == 0) {
            pozicija = n;
            continue;
        }
        if(lista[pozicija] + 1 <= pozicija + 1) {
            lista[pozicija]++;
            ispisi(lista, n);
        }
    }

    return 0;
}