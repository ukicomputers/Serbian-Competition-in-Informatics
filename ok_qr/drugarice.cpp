#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> imena(6);
    for(int i = 0; i < 6; i++) cin >> imena[i];

    for(auto it = imena.begin(); it != imena.end(); ++it) {
        int dupl = count(imena.begin(), imena.end(), *it);
        if(dupl == 3) {
            cout << *it << endl;
            return 0;
        }
    }

    cout << "nemoguce" << endl;
    return 0;
}