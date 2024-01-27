#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isti(vector<int> a)
{
    for (auto & it : a)
    {
        if(it != 0)
            return false;
    }
    return true;
}

int brojStucanja(vector<int> ps, vector<int> prs) {
    int stucanja = 0;
    vector<int> ts = ps;

    for(auto & it : prs) {
        ts[it] = abs(1 - ts[it]);
        if(isti(ts))
            stucanja++;
    }

    return stucanja;
}

int main() {
    int n = 0;
    cin >> n;
    
    vector<int> ps;

    for(int i = 0; i < n; i++) {
        int temp = 0;
        cin >> temp;
        ps.push_back(temp);
    }

    int m = 0;
    cin >> m;

    vector<int> prs;

    for(int i = 0; i < m; i++) {
        int temp = 0;
        cin >> temp;
        prs.push_back(temp);
    }

    cout << brojStucanja(ps, prs) << endl;
    return 0;
}
