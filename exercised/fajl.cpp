#include <iostream>
using namespace std;

int main() {
    int n;
    int k;
    cin >> n >> k;

    int m = (n + k) / 2;
    int sum = 0;
    
    for(int i = 0; i < m; i++) {
        sum += m;
        m += 2;
    }

    if(k % 2 == 0) {
        sum += n;
    } else {
        sum += 2 * m - n;
    }

    return 0;
}