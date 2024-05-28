#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, map<string, int>> sve;

    for(int i = 0; i < n; i++) {
        string ulica, br;
        cin >> ulica >> br;
        
        sve[ulica][br]++;

        int tmp;
        cin >> tmp;
    }

    for(auto ulica : sve) {
        string ime = ulica.first;
        int stanovnika = 0;

        for(auto kuca : ulica.second) {
            cout << ime << " " << kuca.first << ": " << kuca.second << endl;
            stanovnika += kuca.second;
        }

        cout << ime << ": " << stanovnika << endl;
    } 

    return 0;
}