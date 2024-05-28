#include <iostream>
using namespace std;

int main() {
    int kucica = 1;
    int x = 0;
    int y = 0;
    
    string pozicije;
    cin >> pozicije;

    for(char p : pozicije) {
        if(p == '<')
            x--;
        else if(p == '>')
            x++;
        else if(p == '^')
            y++;
        else if(p == 'v')
            y--;

        if(x == 0 && y == 0)
            kucica++;
    }

    cout << kucica << endl;
    return 0;
}