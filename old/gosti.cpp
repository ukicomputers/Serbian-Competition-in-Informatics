#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> sobe(n);

    for(int i = 0; i < n; i++) {
        cin >> sobe[i];
    }

    int a, b;
    int razlika = 10e+5;

    while(!sobe.empty()) {
        auto itA = max_element(sobe.begin(), sobe.end());
        int tempA = *itA;
        sobe.erase(itA);
        int tempB = *max_element(sobe.begin(), sobe.end());
        int trR = abs(tempA - tempB);
        if(trR < razlika && trR > 0) {
            a = tempA;
            b = tempB;
            razlika = trR;
        }
    }

    cout << min(a, b) << " " << max(a, b) << endl;
    return 0;
}