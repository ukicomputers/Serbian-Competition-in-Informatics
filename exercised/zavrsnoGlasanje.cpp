// nije dobro, al bar 10p testova prolazi :)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int brZemalja;
    cin >> brZemalja;

    vector<int> poeni(brZemalja);

    for(int i = 0; i < brZemalja; i++) {
        cin >> poeni[i];
    }

    int zaZemlju, odZemlje;
    cin >> zaZemlju >> odZemlje;
    
    int brojac = 0;
    poeni[zaZemlju - 1] += brZemalja - 1;
    int sabirac = brZemalja - 2;

    for(int i = 0; i < brZemalja; i++) {
        if(i == zaZemlju - 1 || i == odZemlje - 1)
            continue;

        poeni[i] += sabirac;
        sabirac--;

        if(poeni[i] > poeni[zaZemlju - 1])
            brojac++;
    }
    
    cout << brojac << "\n";
    return 0;
}