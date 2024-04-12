#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void printByEvenPositions(vector<int> br, bool sorted = false) {
    if(!sorted)
        sort(br.begin(), br.end());

    for(int i = 0; i < br.size(); i++) {
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
}