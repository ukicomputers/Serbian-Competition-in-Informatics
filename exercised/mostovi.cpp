#include <iostream>
#include <stack>
#include <vector>
#include <unordered_set>
using namespace std;

bool stackDFS(vector<unordered_set<int>> &graf, vector<bool> &presao, int start, int cilj) {
    stack<int> zaProveru;
    presao[start] = true;
    zaProveru.push(start);

    while (!zaProveru.empty()) {
        int trenutni = zaProveru.top();
        zaProveru.pop();

        for (int subnode : graf[trenutni]) {
            if (subnode == cilj)
                return true;

            if (!presao[subnode]) {
                presao[subnode] = true;
                zaProveru.push(subnode);
            }
        }
    }

    return false;
}

void srusiTacke(vector<unordered_set<int>> &graf, int a, int b) {
    graf[a].erase(b);
    graf[b].erase(a);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int proveraOd, proveraDo;
    cin >> proveraOd >> proveraDo;

    int brojOstrva, brojMostova;
    cin >> brojOstrva >> brojMostova;

    vector<unordered_set<int>> graf(brojOstrva);

    for (int i = 0; i < brojMostova; i++) {
        int mostOd, mostDo;
        cin >> mostOd >> mostDo;
        graf[mostOd].insert(mostDo);
        graf[mostDo].insert(mostOd);
    }

    int srusenihMostova;
    cin >> srusenihMostova;

    for (int i = 0; i < srusenihMostova; i++) {
        int tackaA, tackaB;
        cin >> tackaA >> tackaB;

        srusiTacke(graf, tackaA, tackaB);

        vector<bool> presao(brojOstrva);
        if (stackDFS(graf, presao, proveraOd, proveraDo))
            cout << "da\n";
        else
            cout << "ne\n";
    }

    return 0;
}
