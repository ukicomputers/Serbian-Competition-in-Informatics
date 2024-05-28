#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isti(vector<int> a)
{
    for (auto &it : a)
    {
        if (it != 0)
            return false;
    }
    return true;
}

int main()
{
    int n = 0;
    cin >> n;

    vector<int> ps(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ps[i];
    }

    int m = 0;
    cin >> m;

    vector<int> prs(m);
    int stucanja = 0;

    for (int i = 0; i < m; i++)
    {
        cin >> prs[i];

        ps[prs[i]] = abs(1 - ps[prs[i]]);
        if (isti(ps))
            stucanja++;
    }

    cout << stucanja << endl;
    return 0;
}