#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int skupV, velicina;
    cin >> skupV >> velicina;

    vector<int> skup(skupV);

    for (int i = 0; i < skupV; i++) {
        cin >> skup[i];
    }

    sort(skup.begin(), skup.end());

    vector<int> najgusci(skup.begin(), skup.begin() + velicina);
    float najGustina = 0.00;

    for (int i = 1; i <= skupV - velicina; i++) {
        float trenutnaGustina = (float)velicina / (skup[i + velicina - 1] - skup[i]);

        if (trenutnaGustina > najGustina || (trenutnaGustina == najGustina && skup[i] < najgusci[0])) {
            najGustina = trenutnaGustina;
            najgusci.assign(skup.begin() + i, skup.begin() + i + velicina);
        }
    }

    for (auto gust : najgusci) {
        cout << gust << " ";
    }

    cout << endl;
    return 0;
}
