#include <iostream>
using namespace std;

int main()
{
    int sirina, minuti;
    cin >> sirina >> minuti;

    string sj;
    cin >> sj;

    if (sirina <= 23 && minuti < 30 && sirina < 66 || sirina < 23 && minuti <= 30 && sirina < 66)
    {
        cout << "z" << endl;
    }
    else
    {
        if (sirina >= 66 && minuti >= 30)
        {
            if (sj == "s")
            {
                cout << "sh" << endl;
            }
            else
            {
                cout << "jh" << endl;
            }
        }
        else if(sirina >= 23 && minuti > 30 && sirina < 66 || sirina > 23 && minuti <= 30 && sirina < 66)
        {
            if (sj == "s")
            {
                cout << "su" << endl;
            }
            else
            {
                cout << "ju" << endl;
            }
        }
    }

    return 0;
}