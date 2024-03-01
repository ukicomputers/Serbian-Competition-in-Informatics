#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    string p1, p2;
    int bp1, bp2;

    if(a > b) {
        p1 = "A";
        bp1 = a;
    } else {
        p1 = "B";
        bp1 = b;
    }

    if(c > d) {
        p2 = "C";
        bp2 = c;
    } else {
        p2 = "D";
        bp2 = d;
    }
    
    if(bp1 > bp2)
        cout << p2 << endl;
    else
        cout << p1 << endl;

    return 0;
}