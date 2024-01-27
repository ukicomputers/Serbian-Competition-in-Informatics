#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int pera = 0;
    cin >> pera;
    int zika = 0;
    cin >> zika;
    int mika = 0;
    cin >> mika;
    int gorivo = 0;
    cin >> gorivo;

    int trenutnoGorivo = gorivo;

    while (pera != 0)
    {
        if (trenutnoGorivo - pera < 0 || trenutnoGorivo - pera == 0)
        {
            cout << "pera" << endl;
            pera -= trenutnoGorivo;
            trenutnoGorivo = gorivo;
        } else {
            trenutnoGorivo -= pera;
            pera = 0;
        }
    }

    while (zika != 0)
    {
        if (trenutnoGorivo - zika < 0 || trenutnoGorivo - zika == 0)
        {
            cout << "zika" << endl;
            zika -= trenutnoGorivo;
            trenutnoGorivo = gorivo;
        } else {
            trenutnoGorivo -= zika;
            zika = 0;
        }
    }

    while (mika != 0)
    {
        if (trenutnoGorivo - mika < 0 || trenutnoGorivo - mika == 0)
        {
            cout << "mika" << endl;
            mika -= trenutnoGorivo;
            trenutnoGorivo = gorivo;
        } else {
            trenutnoGorivo -= mika;
            mika = 0;
        }
    }

    return 0;
}