#include <iostream>
#include <vector>
using namespace std;

int main() {
    int nA, mareMnozi;
    cin >> nA >> mareMnozi;

    float prosekCifara = 0.00;
    vector<string> A(nA);

    for(int i = 0; i < nA; i++) {
        cin >> A[i];
        prosekCifara += stoi(A[i]);
    }

    prosekCifara /= nA;

    for(auto it = A.begin(); it != A.end();) {
        if(stoi(*it) < prosekCifara)
            it = A.erase(it);
        else
            ++it;
    }

    string bzm;

    for(auto it : A) {
        bzm += it;
    }

    mareMnozi = stoi(bzm) * mareMnozi;
    cout << mareMnozi << endl;

    string k = to_string(mareMnozi);
    bool it = true; // true za +, false za -
    int rez = 0;

    for(char c : k) {
        int br = c - '0';

        if(it) {
            rez += br;
            it = !it;
        } else {
            rez -= br;
            it = !it;
        }
    }

    cout << rez << endl;
}