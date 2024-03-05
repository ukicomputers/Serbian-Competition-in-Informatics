#include <iostream>
using namespace std;

int main() {
    int a, b;
    string d;
    cin >> a >> b >> d;

    if(d == "O")
        cout << (2 * a) + (2 * b) << endl;
    else if(d == "P")
        cout << a * b << endl;
    
    return 0;
}