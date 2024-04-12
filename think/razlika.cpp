#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string br;
    cin >> br;

    vector<int> brojevi;
    string nule = "1";

    while(!br.empty()) {
        auto min = min_element(br.begin(), br.end());
        if((*min - '0') == 0) {
            nule += "0";
        } else {
            brojevi.push_back((*min - '0'));
        }
        br.erase(min);
    }
    
    auto minIt = min_element(brojevi.begin(), brojevi.end());
    int min = *minIt;
    min *= stoi(nule);
    brojevi.erase(minIt);
    string br2;

    for(int a : brojevi) {
        br2 += to_string(a);
    }

    cout << min - stoi(br2) << endl;
    return 0;
}