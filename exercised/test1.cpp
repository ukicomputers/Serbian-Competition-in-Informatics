#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 0;

    cin >> a;
    cin >> b;

    string izlaz = to_string(a * b) + " " + to_string(a + b);
    cout << izlaz << endl;
    return 0;
}