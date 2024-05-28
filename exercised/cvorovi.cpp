// Ovaj zadatak je koncept generalnog grafa (adjency vec)
#include <iostream>
#include <vector>
using namespace std;

bool dfs(vector<vector<int>> &graf, vector<bool> &posecen, int odKoga, int doCega) {
    // odKoga je od trenutne veze (moze biti i subveza), tako da je promenljiv, a doCega nije
    if(odKoga == doCega) // jer smo tu dosli
        return true;
    if(posecen[odKoga]) // posto je trenutni node predjen dole u for loop-u
        return false;
    posecen[odKoga] = true; // + nije subnode

    for(int odTamo : graf[odKoga]) // unutrasnja konekcija
        if(dfs(graf, posecen, odTamo, doCega)) // od ove povezane veze
            return true;
    
    return false; // nije se uspelo doci, nije povezan
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