#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int desno, vise;
    cin >> desno >> vise;
    int velicina = desno + vise;

    vector<string> str(velicina);
    fill(str.begin(), str.begin() + desno, "DESNO");
    fill(str.begin() + desno, str.end(), "GORE");

    vector<vector<string>> rez;
    sort(str.begin(), str.end());

    do {
        for(int i = 0; i < velicina - 1; i++)
            cout << str[i] << " ";
        cout << str[velicina - 1] << endl;
    } while (next_permutation(str.begin(), str.end()));

    return 0;
}
