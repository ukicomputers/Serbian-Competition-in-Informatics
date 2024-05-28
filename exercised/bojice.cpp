#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int d, b;
    string boje;
    cin >> d >> b >> boje;

    int ukupno = 0;
    while(!boje.empty()) {
        string uzelo = boje.substr(0, 3);
        if(count(uzelo.begin(), uzelo.end(), 'p') > 0 && count(uzelo.begin(), uzelo.end(), 'b') > 0)
            ukupno++;
        boje.erase(0, 3);
    }
    
    cout << ukupno << endl;
    return 0;
}