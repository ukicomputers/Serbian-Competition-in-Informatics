#include <iostream>
using namespace std;

int main()
{
    int unos = 0;
    cin >> unos;

    int tip = 0;
    bool nice = false;

    for (int i = 0; i < unos; i++)
    {
        int temp = 0;
        cin >> temp;

        if (temp < 0)
        {
            if (tip != 1 && tip != 0)
            {
                nice = false;
            }
            else
            {
                tip = 1;
                nice = true;
            }
        }
        else if (temp == 0)
        {
            if (tip != 2 && tip != 1)
            {
                nice = false;
            }
            else
            {
                tip = 2;
                nice = true;
            }
        }
        else if (temp > 0)
        {
            if (tip != 3 && tip != 2)
            {
                nice = false;
            }
            else
            {
                tip = 3;
                nice = true;
            }
        }
    }

    if (nice)
        cout << "da" << endl;
    else
        cout << "ne" << endl;
}