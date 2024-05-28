#include <iostream>
using namespace std;

int main()
{
    int dostave;
    cin >> dostave;

    int rastojanje = 0;
    int proslaPozicija;

    for (int i = 0; i < dostave; i++)
    {
        int a;
        cin >> a;

        if (a > proslaPozicija && i != 0)
        {
            rastojanje += a - proslaPozicija;
        }
        else if (i != 0)
        {
            rastojanje += proslaPozicija - a;
        }

        proslaPozicija = a;
    }

    cout << rastojanje << endl;
    return 0;
}