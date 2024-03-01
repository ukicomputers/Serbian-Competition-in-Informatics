#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int pregledi[n];

    int min, max = pregledi[0];
    int a, b;

    for(int i = 1; i < n; i++) {
        cin >> pregledi[i];
        if(pregledi[i] < min) {
            min = pregledi[i];
            a = i;
        }
        if(pregledi[i] > max) {
            max = pregledi[i];
            b = i;
        }
    }
}