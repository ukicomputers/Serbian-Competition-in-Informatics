#include <iostream>
using namespace std;

int main() {
    int nepBr;
    cin >> nepBr;

    int pog;
    cin >> pog;

    int tacno = 0;
    int pogresno = 0;
    int last;

    while(pog != 0) {
        int tb1 = pog % 10;
        
        if(nepBr % 10 == tb1 && tb1 != last) {
            tacno++;
        } else if(nepBr % 10 != tb1 && tb1 != last) {
            pogresno++;
        }

        last = tb1;
        pog /= 10;
    }
    
    cout << tacno << " " << pogresno << endl;
    return 0;
}