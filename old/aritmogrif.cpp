#include <iostream>
#include <unordered_map>
using namespace std;

bool ispuni(unordered_map<int, char> &mapa, string &strRebus, string &brRebus, int &i, int &puta, int toliko) {
    for(; i < strRebus.size(); i++) {
        char str = strRebus[i];

        if(str == ' ') {
            i += 3;
            puta++;
            if(puta >= toliko)
                return false;
            else
                return true;
        }

        int br = char(brRebus[i]) - '0';
        mapa[br] = str;
    }
    return false;
}

int main() {
    string strRebus, brRebus;
    getline(cin, strRebus);
    getline(cin, brRebus);  

    int sada = 0, puta = 0;
    unordered_map<int, char> oznake, rez;

    while(ispuni(oznake, strRebus, brRebus, sada, puta, 2));
    puta = 0;
    ispuni(rez, strRebus, brRebus, sada, puta, 1);

    for(const auto &a : rez) {
        int br = a.first;
        char str = a.second;
        if(oznake[br] == str || oznake[br] == '\0')
            continue;
        else {
            cout << "ne" << endl;
            return 0;
        }
    }
    
    cout << "da" << endl;
    return 0;
}