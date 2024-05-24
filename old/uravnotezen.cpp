// takozvani hashmap, vidi svoja LeetCode resenja
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n; 
    cin >> n;

    vector<int> segmenti(n);

    for(int i = 0; i < n; i++)
        cin >> segmenti[i];

    unordered_map<int, int> tabla;
    tabla[0] = 1;

    int brojac = 0;
    int trenutniZbir = 0;

    for(int i = 0; i < n; i++) {
        trenutniZbir += segmenti[i];
        int razlika = trenutniZbir - (i + 1);

        if(tabla.find(razlika) != tabla.end()) {
            brojac += tabla[razlika];
        }

        tabla[razlika]++;
    }
    
    cout << brojac << "\n";
    return 0;
}