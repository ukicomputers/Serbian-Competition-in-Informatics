#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void input(vector<int> &vec, int &num) {
    for(int i = 0; i < num; i++) {
        int br;
        cin >> br;
        vec[i] = abs(br);
    }
}

int main() {
    int n, d;
    cin >> n >> d;

    vector<int> v1(n), v2(n);
    input(v1, n);
    input(v2, n);

    int brojac = 0;

    for(int br1 : v1) {
        for(auto it = v2.begin(); it != v2.end(); ++it) {
            int raz = br1 - *it;
            if(raz <= d && raz >= 0) {
                brojac++;
                v2.erase(it);
                break;
            }
        }
    }

    cout << brojac << endl;
    return 0;
}