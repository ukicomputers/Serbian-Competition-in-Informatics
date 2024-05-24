// Ovaj zadatak je koncept generalnog grafa (adjency vec)
// remastered: najbrza zbog steka
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

bool dfs(vector<vector<int>> &graf, vector<bool> &presao, int start, int cilj) {
    stack<int> zaProveru;
    presao[start] = true;
    zaProveru.push(start);

    while(!zaProveru.empty()) {
        int trenutni = zaProveru.top();
        zaProveru.pop();

        for(int subnode : graf[trenutni]) {
            if(subnode == cilj)
                return true;

            if(!presao[subnode]) {
                presao[subnode] = true;
                zaProveru.push(subnode);
            }
        }
    }
    
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int brRutera, brKonekcija;
    cin >> brRutera >> brKonekcija;

    vector<vector<int>> konekcije(brRutera);

    for(int i = 0; i < brKonekcija; i++) {
        int od, doTamo;
        cin >> od >> doTamo;
        konekcije[od - 1].push_back(doTamo - 1); // zato sto je vec od 0 do brR - 1, a ne od 1
    }

    int pitanja;
    cin >> pitanja;

    for(int i = 0; i < pitanja; i++) {
        int odKoga, doCega;
        cin >> odKoga >> doCega;

        vector<bool> preso(brRutera);
        if(dfs(konekcije, preso, odKoga - 1, doCega - 1)) // ponovo zato sto (gore)
            cout << "da\n";
        else
            cout << "ne\n";
    }
    
    return 0;
}