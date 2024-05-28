#include <iostream>
#include <algorithm>
using namespace std;

bool samoglasnik(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int provera(string str) {
    char prvoSlovo = str.front();
    char zadnjeSlovo = str.back();

    if (samoglasnik(prvoSlovo) && samoglasnik(zadnjeSlovo))
        return 5;
    else if (samoglasnik(prvoSlovo) || samoglasnik(zadnjeSlovo))
        return 3;
    else
        return 1;
}

int main() {
    int ocena = 0;

    for (int i = 0; i < 3; i++) {
        string str;
        cin >> str;
        ocena += provera(str);
    }

    cout << ocena << endl;
    return 0;
}