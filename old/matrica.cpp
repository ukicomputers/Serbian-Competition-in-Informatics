#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    cin >> a >> b;

    vector<vector<int>> drveca;

    for (int i = 0; i < a; i++)
    {
        vector<int> temp;
        for (int i = 0; i < b; i++)
        {
            int tmp = 0;
            cin >> tmp;
            temp.push_back(tmp);
        }
        drveca.push_back(temp);
    }

    int pomerajRed = 0;
    int pomerajKolona = 0;
    cin >> pomerajRed >> pomerajKolona;

    int red = 0;
    int kolona = 0;
    int sum = 0;

    while (red >= 0 && red < a && kolona >= 0 && kolona < b)
    {
        if (drveca[red][kolona] == 1)
        {
            sum++;
        }

        red += pomerajRed;
        kolona += pomerajKolona;
    }

    cout << sum << endl;
    return 0;
}