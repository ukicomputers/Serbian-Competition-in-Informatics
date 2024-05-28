#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 0;

    cin >> a;
    cin >> b;

    int br = a;

    while(br != b) {
        cout << br << endl;
        br++;
    }
    
    cout << b << endl;
    return 0;
}
