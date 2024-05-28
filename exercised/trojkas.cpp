#include <iostream>
using namespace std;

int main() {
    int ukupnoE1;
    int ukupnoE2;
    cin >> ukupnoE1 >> ukupnoE2;
    
    int dvojkaE1;
    int trojkaE1;
    cin >> dvojkaE1 >> trojkaE1;

    dvojkaE1 *= 2;
    trojkaE1 *= 3;

    ukupnoE1 -= (dvojkaE1 + trojkaE1);

    int dvojkaE2;
    int trojkaE2;
    cin >> dvojkaE2 >> trojkaE2;

    dvojkaE2 *= 2;
    trojkaE2 *= 3;

    ukupnoE2 -= (dvojkaE2 + trojkaE2);

    cout << ukupnoE1 << " " << ukupnoE2 << endl;
    cout << ukupnoE1 + ukupnoE2 << endl;
    return 0;
}