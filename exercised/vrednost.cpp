#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int kg1, rsd1 = 0;
    int kg2, rsd2 = 0;
    int kg3, rsd3 = 0;

    cin >> kg1 >> rsd1;
    cin >> kg2 >> rsd2;
    cin >> kg3 >> rsd3;

    int najvredniji = max(rsd1, max(rsd2, rsd3));
    int najtezi = max(kg1, max(kg2, kg3));

    if(najtezi == kg1)
        najtezi = rsd1;
    else if(najtezi == kg2)
        najtezi = rsd2;
    else if(najtezi == kg3)
        najtezi = rsd3;
        
    cout << najvredniji - najtezi << endl;
    
    return 0;
}