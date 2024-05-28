#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string br;
    cin >> br;

    vector<string> rez;

    while (br.length() >= 3) {
        rez.insert(rez.begin(), br.substr(br.length() - 3));
        br.erase(br.length() - 3);
    }

    if(br.length() > 0) {
        rez.insert(rez.begin(), br);
    }

    for(int i = 0; i < rez.size() - 1; i++)
        cout << rez[i] << " ";

    cout << rez[rez.size() - 1] << endl;
    return 0;
}