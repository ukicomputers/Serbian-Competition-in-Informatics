#include <iostream>
using namespace std;

int ocena(int a)
{
    if (a >= 0 && a <= 40)
        a = 1;
    else if (a >= 41 && a <= 55)
        a = 2;
    else if (a >= 56 && a <= 70)
        a = 3;
    else if (a >= 71 && a <= 85)
        a = 4;
    else if (a >= 86)
        a = 5;

    return a;
}

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    cin >> a >> b >> c;

    a = ocena(a);
    b = ocena(b);
    c = ocena(c);

    if (c < b)
        swap(c, b);
    if (b < a)
        swap(b, a);
    if (c < b)
        swap(c, b);

    cout << a << endl;
    return 0;
}