#include <iostream>
using namespace std;

int main() {
    unsigned int ukljSijalice = 0;
    int brSijalica;
    cin >> brSijalica;

    int sijalice[brSijalica];

    for(int i = 0; i < brSijalica; i++) {
        cin >> sijalice[i];
        ukljSijalice += sijalice[i];
    }

    int brKlika;
    cin >> brKlika;

    int stuc = 0;

    for(int i = 0; i < brKlika; i++) {
        int indexKlik;
        cin >> indexKlik;

        if(sijalice[indexKlik] == 0) {
            sijalice[indexKlik] = 1;
            ukljSijalice++;
        } else {
            sijalice[indexKlik] = 0;
            ukljSijalice--;
        }

        if(ukljSijalice == 0)
            stuc++;
    }

    cout << stuc << endl;
    return 0;
}