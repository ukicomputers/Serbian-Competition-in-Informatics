#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    int brojac = 0;
    vector<int> br(n);
    cin >> br[0];

    for(int i = 1; i < n; i++) {
        cin >> br[i];

        if(br[i] <= br[i - 1]) {
            brojac += (br[i - 1] - br[i]) + 1;
            br[i] = br[i - 1] + 1;
        }
    }

    cout << brojac << endl;
    return 0;
}