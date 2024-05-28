#include <iostream>
using namespace std;

int main() {
    int logID = 0;
    int brRacunara = 0;

    cin >> logID;
    cin >> brRacunara;

    string prviLog;
    string drugiLog;
    int brlg = 0;

    for(int i = 0; i < brRacunara; i++) {
        int id = 0;
        string ime;

        cin >> id;
        cin >> ime;

        if(prviLog == "" && id == logID) {
            prviLog = ime;
            brlg++;
        } else if(i > 0 && id == logID) {
            drugiLog = ime;
            brlg++;
        }
    }
    
    if(brlg > 0) {
        cout << prviLog << endl;
        cout << drugiLog << endl;
    } else {
        cout << "nema" << endl;
    }
    
    return 0;
}