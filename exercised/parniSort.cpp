#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> br(n);

    for(int i = 0; i < n; i++) {
        cin >> br[i];
    }

    sort(br.begin(), br.end());

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            if(br[0] % 2 == 0) {
                cout << br[0] << " ";
                br.erase(br.begin());
            } else {
                for(auto it = br.begin() + 1; it != br.end(); ++it) {
                    if(*it % 2 == 0) {
                        cout << *it << " ";
                        br.erase(it);
                        break;
                    }
                }
            }
        } else {
            if(br[0] % 2 != 0) {
                cout << br[0] << " ";
                br.erase(br.begin());
            } else {
                for(auto it = br.begin() + 1; it != br.end(); ++it) {
                    if(*it % 2 != 0) {
                        cout << *it << " ";
                        br.erase(it);
                        break;
                    }
                }
            }
        }
    }

    cout << endl;
    return 0;
}