#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string br;
    char m;
    cin >> br >> m;
    auto max = *max_element(br.begin(), br.end());

    if(m == max) {
        cout << br << endl;
        return 0;
    }

    for(int i = 0; i < br.length(); i++) {
        if(br[i] == max)
            br[i] = m;
    }

    cout << br << endl;
    return 0;
}
