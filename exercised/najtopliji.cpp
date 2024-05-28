#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> dani;

    for (int i = 0; i < 7; i++)
    {
        int temp = 0;
        cin >> temp;
        dani.push_back(temp);
    }

    auto it = max_element(dani.begin(), dani.end());

    if (it != dani.end())
    {
        int index = distance(dani.begin(), it);
        cout << index + 1 << endl;
    }

    return 0;
}