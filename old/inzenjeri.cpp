#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int centar1 = 0;
    int centar2 = 0;
    int centar = 0;

    cin >> centar1 >> centar2;
    centar = min(centar1, centar2);

    int i1 = 0;
    int i2 = 0;
    int i3 = 0;
    int i4 = 0;

    cin >> i1 >> i2 >> i3 >> i4;

    i1 = abs(centar - i1);
    i2 = abs(centar - i2);
    i3 = abs(centar - i3);
    i4 = abs(centar - i4);

    int resenje = min(i1, min(i2, min(i3, i4)));
    cout << resenje << endl;
    
    return 0;
}