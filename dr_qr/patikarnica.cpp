#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool lexSort(const pair<string, int> &a, const pair<string, int> &b) {
    return a.first < b.first;
}

int main() {
    int patika;
    cin >> patika;

    vector<pair<string, int>> patike(patika);

    for(int i = 0; i < patika; i++) {
        string imePatika;
        int cenaPatika;
        cin >> imePatika >> cenaPatika;
        patike[i].first = imePatika;
        patike[i].second = cenaPatika;
    }

    sort(patike.begin(), patike.end(), lexSort);

    int kupci;
    cin >> kupci;

    for(int i = 0; i < kupci; i++) {
        vector<pair<string, int>> budzet;
        auto it = patike.begin();
        int maks = 0;

        int maksOdToga;
        cin >> maksOdToga;

        while(it != patike.end()) {
            if(it->second <= maksOdToga && it->second >= maks) {
                maks = it->second;
                if(budzet.size() > 0 && budzet[0].second < maks) {
                    budzet = {};
                }
                budzet.push_back(make_pair(it->first, it->second));
            }
            ++it;
        }

        if(budzet.size() > 0) {
            for(const auto &a : budzet) {
                cout << a.first << " " << a.second << endl;
            }
        } else {
            cout << "nema" << endl;
        }
    }
    
    return 0;
}