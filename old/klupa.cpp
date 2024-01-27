#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int broj = 0;
    cin >> broj;
    
    vector<int> poeni;

    for(int i = 0; i < broj; i++) {
        int temp = 0;
        cin >> temp;
        poeni.push_back(temp);
    }

    sort(poeni.rbegin(), poeni.rend());

    cout << poeni[1] << endl;
    return 0;
}