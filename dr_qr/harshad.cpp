#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int brojac = 0;

    for(int i = a; i <= b; i++) {
        string br = to_string(i);
        int deli = 0;
        int minus = 1;
        for(char c : br) {
            if(c == '-') {
                minus = -1;
                continue;
            }
            deli += c - '0';
        }

        deli *= minus;
        float podeljeno = float(i) / float(deli);

        if(deli == 0)
            continue;

        int podelj = i / deli;

        if(podeljeno == float(podelj))
            brojac++;
    }
    
    cout << brojac << endl;
    return 0;
}