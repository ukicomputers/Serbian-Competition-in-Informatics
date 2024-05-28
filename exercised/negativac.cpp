#include <iostream>
using namespace std;

int main() {
    int unos = 0;
    cin >> unos;

    bool negativni = false;
    
    for(int i = 0; i < unos; i++) {
        float temp = 0;
        cin >> temp;

        if(temp < 0)
            negativni = true;
    }

    if(negativni)
        cout << "da" << endl;
    else
        cout << "ne" << endl;

    return 0;
}