#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> imena;
    string prethodni;

    while(prethodni != "gotovo") {
        cin >> prethodni;
        if(prethodni != "gotovo")
            imena.push_back(prethodni);
    }

    string izlaz;

    if(imena.size() == 1) {
        izlaz = imena[0];
    } else if(imena.size() == 2) {
        izlaz = imena[0] + " i " + imena[1];
    } else if(imena.size() > 2) {
        for(int i = 0; i < imena.size() - 2; i++) {
            izlaz += imena[i] + ", ";
        }
        izlaz += imena[imena.size() - 2] + " i " + imena[imena.size() - 1];
    }

    cout << izlaz << endl;
}
