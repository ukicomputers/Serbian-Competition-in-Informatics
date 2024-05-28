#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;

    cin >> a >> b >> c >> d >> e;

    bool moguce = false;
    bool nastavi = true;

    if(a + b + c > d)
        moguce = true;
    else
        nastavi = false;
    
    if(b + c + d > e && nastavi)
        moguce = true;
    else {
        moguce = false;
        nastavi = false;
    }

    if(c + d + e > a && nastavi)
        moguce = true;
    else {
        moguce = false;
        nastavi = false;
    }

    if(d + e + a > b && nastavi)
        moguce = true;
    else {
        moguce = false;
        nastavi = false;
    }

    if(e + a + b > c && nastavi)
        moguce = true;
    else {
        moguce = false;
        nastavi = false;
    }

    if(moguce)
        cout << "da" << endl;
    else
        cout << "ne" << endl;

    return 0;
}