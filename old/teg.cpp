#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> ulaz(3);
    
    for(int i = 0; i < 3; i++) {
        cin >> ulaz[i];
    }

    sort(ulaz.begin(), ulaz.end());
    vector<int> rez(4);

    rez[0] = abs(ulaz[0] - ulaz[1]);
    rez[1] = abs(ulaz[0] - ulaz[2]);
    rez[2] = abs(ulaz[1] - ulaz[2]);
    rez[3] = abs(ulaz[2] - ulaz[1] - ulaz[0]);

    sort(rez.begin(), rez.end());
    
    if(rez[0] == 0)
        cout << rez[1] << endl;
    else
        cout << rez[0] << endl;

    return 0;
}