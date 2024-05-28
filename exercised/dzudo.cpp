#include <iostream>
using namespace std;

int main() {
    int a = 0;
    cin >> a;

    int do50 = 0;
    int do75 = 0;
    int od76 = 0;

    for(int i = 0; i < a; i++) {
        int temp = 0;
        cin >> temp;

        if(temp <= 50)
            do50++;
        else if(temp >= 51 && temp <= 75)
            do75++;
        else if(temp >= 76)
            od76++;
    }

    cout << do50 << endl;
    cout << do75 << endl;
    cout << od76 << endl;
}