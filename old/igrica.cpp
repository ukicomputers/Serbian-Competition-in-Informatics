#include <iostream>
using namespace std;

int main() {
    string br1;
    string br2;

    cin >> br1;
    cin >> br2;

    br1.pop_back();

    cout << br1 + br2 << endl;
    return 0;
}