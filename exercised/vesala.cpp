#include <iostream>
#include <algorithm>
#include <vector>
#include <cctype>
using namespace std;

void zameni(string &source, char &sta, string &gde, string &nema) {
    auto it = find(source.begin(), source.end(), sta);
    if(it == source.end()) {
        nema += sta;
        return;
    }
    while (it != source.end()) { 
        int poz = it - source.begin();
        gde[poz] = source[poz];
        it = find(it + 1, source.end(), sta);
    }
}

int main() {
    string zamisljenaRec, pogodjenaSlova;
    vector<int> razmaci;

    getline(cin, zamisljenaRec);
    cin >> pogodjenaSlova;

    string popuni, nps;
    for(char &c : zamisljenaRec) {
        if(c == ' ')
            popuni += " ";
        else
            popuni += "_";
    }

    while(!pogodjenaSlova.empty()) {
        char c = pogodjenaSlova[0];
        zameni(zamisljenaRec, c, popuni, nps);
        pogodjenaSlova.erase(remove(pogodjenaSlova.begin(), pogodjenaSlova.end(), c), pogodjenaSlova.end());
    }

    cout << popuni << endl;
    if(nps.empty())
        cout << "-" << endl;
    else
        cout << nps << endl;
    return 0;
}