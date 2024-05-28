#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a = 0;
    int b = 0;
    
    cin >> a;
    cin >> b;

    int deda = 0;
    int joca = 0;

    if(a % 2 > 0 || b % 2 > 0) {
        deda += a;
        deda += b;
    } else {
        deda += b - a;
        deda = abs(deda);
    }

    if(b > a) {
        joca += (b - a) * 3;
        joca = abs(joca);
    } else {
        joca += (b - a) * 2;
        joca = abs(joca);
    }

    if(deda > joca)
        cout << "Joca" << endl;
    else if(joca > deda)
        cout << "Rade" << endl;
    else
        cout << "Istovremeno" << endl;

    return 0;
}