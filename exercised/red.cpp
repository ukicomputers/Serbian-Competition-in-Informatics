#include <iostream>
using namespace std;

int main() {
    int mojaKorpa, brojKupaca;
    cin >> mojaKorpa >> brojKupaca;

    int mesto = brojKupaca + 1;

    for(int i = 0; i < brojKupaca; i++) {
        int korpaKupca;
        cin >> korpaKupca;

        if(korpaKupca > mojaKorpa)
            mesto--;
        else
            break;
    }

    cout << mesto << endl;
    return 0;
}