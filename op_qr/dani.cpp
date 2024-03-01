#include <iostream>
using namespace std;

int main() {
    int nedelja, danas, plusDan;
    cin >> nedelja >> danas >> plusDan;
    cout << (danas + plusDan) % nedelja << endl;
    return 0;
}