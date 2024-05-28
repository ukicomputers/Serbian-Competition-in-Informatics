#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;

    for(int i = 0; i < k; i++) {
        int tr;
        cin >> tr;

        if(i % 2 == 0) {
            if(tr % 2 != 0) {
                cout << "ne" << endl;
                return 0;
            }
        } else {
            if(tr % 2 == 0) {
                cout << "ne" << endl;
                return 0;
            }
        }
    }
    
    cout << "da" << endl;
    return 0;
}