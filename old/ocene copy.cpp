#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool comparer(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second < b.second;
}

int main() {
    int ucenici;
    cin >> ucenici;

    unordered_map<int, int> ponavljanja;
    int maxOcena = 0;

    for(int i = 0; i < ucenici; i++) {
        int bodovi, ocena;
        cin >> bodovi;

        if(bodovi >= 90)
            ocena = 5;
        else if(bodovi >= 77 && bodovi <= 89)
            ocena = 4;
        else if(bodovi >= 64 && bodovi <= 76)
            ocena = 3;
        else if(bodovi >= 51 && bodovi <= 63)
            ocena = 2;
        else if(bodovi >= 0 && bodovi <= 50)
            ocena = 1;
        
        ponavljanja[ocena]++;

        if(ocena > maxOcena)
            maxOcena = ocena;
    }

    auto najcesce = max_element(ponavljanja.begin(), ponavljanja.end(), comparer);

    if(najcesce->second == 1)
        cout << maxOcena << endl;
    else {
        cout << najcesce->first << endl;
    }
    
    return 0;
}