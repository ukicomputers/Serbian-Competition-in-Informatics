#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int stepenice[n];

    for(int i = 0; i < n; i++)
        cin >> stepenice[i];

    int start, end;

    for(int i = 1; i < n; i++) {
        if(stepenice[i] - stepenice[i - 1] == stepenice[i] - stepenice[i + 1]) {
            // kada ih ima tri
            start = i - 1;
            end = i + 1;
            break;
        } else if(n < 3) {
            // kada ih ima dva (minimalna vrednost)
            start = 0;
            end = n;
            break;
        }
    }

    return 0;
}