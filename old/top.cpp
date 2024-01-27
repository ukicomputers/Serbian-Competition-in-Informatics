#include <iostream>
using namespace std;

string ulaz1(string ulaz) {
    return ulaz.substr(0, 1);
}

int ulaz2(string ulaz) {
    string tr = ulaz.substr(1, 1);
    return stoi(tr);
}

int main() {
    string ulaz;
    cin >> ulaz;
    
    string topKolona = ulaz1(ulaz);
    int topRed = ulaz2(ulaz);

    int pitaj = 0;
    cin >> pitaj;

    for(int i = 0; i < pitaj; i++) {
        string pitanje;
        cin >> pitanje;

        string kolona = ulaz1(pitanje);
        int red = ulaz2(pitanje);

        if(kolona == topKolona || red == topRed)
            cout << "DA" << endl;
        else
            cout << "NE" << endl;
    }

    return 0;
}