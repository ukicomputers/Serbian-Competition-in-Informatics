#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int brojKucica;
    cin >> brojKucica;

    int kolikoSeNatovila = 0;

    for(int k = 0; k < brojKucica; k++) {
        vector<int> cinije(3);
        for(int c = 0; c < 3; c++) cin >> cinije[c];
        sort(cinije.begin(), cinije.end());
        kolikoSeNatovila += cinije[1];
    }

    cout << kolikoSeNatovila << endl;
    return 0;
}