#include <iostream>
using namespace std;

int main() {
    int idGlumca = 0;
    int brUcenika = 0;
    int glasovi = 0;

    cin >> idGlumca;
    cin >> brUcenika;

    for(int i = 0; i < brUcenika; i++) {
        int temp = 0;
        cin >> temp;

        if(temp == idGlumca)
            glasovi++;
    }

    cout << glasovi << endl;

    return 0;
}