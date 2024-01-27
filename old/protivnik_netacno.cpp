#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> domaci;
    vector<int> gosti;

    for(int i = 0; i < 4; i++) {
        int a = 0, b = 0;
        cin >> a >> b;
        domaci.push_back(a);
        gosti.push_back(b);
    }

    int maxRez = 0;
    int elNum = 0;

    for(int i = 0; i < 4; i++) {
        if(domaci[i] - gosti[i] > maxRez) {
            maxRez = domaci[i] - gosti[i];
            elNum = i;
        }
    }

    int najKosevi = *max_element(domaci.begin(), domaci.end());

    if(maxRez > 0)
        cout << najKosevi - gosti[elNum] << endl;
    else
        cout << 0 << endl;

    return 0;
}