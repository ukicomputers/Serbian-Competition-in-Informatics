#include <iostream>
#include <algorithm>
using namespace std;

int njuskalo(string &gde, char &sta) {
    auto it = find(gde.begin(), gde.end(), sta);
    int br = 0;
    while(it != gde.end()) {
        br++;
        it = find(it + 1, gde.end(), sta);
    }
    return br;
}

int main() {
    string ponudjeno, reseno;
    cin >> ponudjeno >> reseno;

    while(!ponudjeno.empty()) {
        char c = ponudjeno[0];
        int moze = njuskalo(ponudjeno, c);
        ponudjeno.erase(remove(ponudjeno.begin(), ponudjeno.end(), c), ponudjeno.end());
        int uzeto = njuskalo(reseno, c);
        if(uzeto > moze) {
            cout << "ne" << endl;
            return 0;
        }
        reseno.erase(remove(reseno.begin(), reseno.end(), c), reseno.end());
    }
    
    cout << "da" << endl;
    return 0;
}