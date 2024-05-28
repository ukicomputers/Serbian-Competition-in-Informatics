// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka/sortiranje_po_proseku
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool prosecni(const pair<float, vector<int>> &a, const pair<float, vector<int>> &b) {
    return a.first > b.first;
}

int main() {
    int ucenici, ocene;
    cin >> ucenici >> ocene;

    vector<pair<float, vector<int>>> sveOcene(ucenici, make_pair(0.0, vector<int>(ocene)));

    for(int m = 0; m < ucenici; m++) {
        float prosek = 0;
        for(int n = 0; n < ocene; n++) {
            cin >> sveOcene[m].second[n];
            prosek += sveOcene[m].second[n];
        }
        prosek /= float(ocene);
        sveOcene[m].first = prosek;
    }

    sort(sveOcene.begin(), sveOcene.end(), prosecni);
    
    for(const auto &a : sveOcene) {
        for(int i = 0; i < a.second.size(); i++) {
            cout << a.second[i] << " ";
        }
        cout << endl;
    }

    return 0;
}