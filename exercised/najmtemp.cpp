#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int brGrad = 0;
    cin >> brGrad;

    vector<int> temp;

    for(int i = 0; i < brGrad; i++) {
        int tmp;
        cin >> tmp;
        temp.push_back(tmp);
    }

    int najmanja = *min_element(temp.begin(), temp.end());
    cout << najmanja << endl;
}