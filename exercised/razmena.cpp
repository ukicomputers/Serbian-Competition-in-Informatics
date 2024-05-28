#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string br, del;
    cin >> br;
    
    while(!br.empty()) {
        auto max = max_element(br.begin(), br.end());
        if(max == br.begin()) {
            del += *max;
            br.erase(max);
        } else {
            break;
        }
    }

    auto max = max_element(br.rbegin(), br.rend());
    iter_swap(br.begin(), (max + 1).base());

    cout << del << br << endl;
    return 0;
}