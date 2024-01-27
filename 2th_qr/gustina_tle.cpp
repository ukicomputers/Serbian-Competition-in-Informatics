#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int skupV = 0;
    cin >> skupV;

    int velicina = 0;
    cin >> velicina;

    vector<int> skup(skupV);

    for (int i = 0; i < skupV; i++)
    {
        cin >> skup[i];
    }

    vector<bool> kombinacijeP(skupV);
    fill(kombinacijeP.begin(), kombinacijeP.begin() + velicina, true);

    vector<int> najgusci;
    float najGustina = 0.00;

    do
    {
        vector<int> kombinacija;

        for (int i = 0; i < skupV; i++)
        {
            if (kombinacijeP[i])
            {
                kombinacija.push_back(skup[i]);
            }
        }

        float maxMin = *max_element(kombinacija.begin(), kombinacija.end()) - *min_element(kombinacija.begin(), kombinacija.end());
        float gustina = velicina / maxMin;

        if (gustina > najGustina)
        {
            najGustina = gustina;
            najgusci = kombinacija;
        }
        else if (gustina == najGustina)
        {
            if (!lexicographical_compare(najgusci.begin(), najgusci.end(), kombinacija.begin(), kombinacija.end()))
            {
                najgusci = kombinacija;
            }
        }

        kombinacija.clear();
    } while (prev_permutation(kombinacijeP.begin(), kombinacijeP.end()));

    sort(najgusci.begin(), najgusci.end());
    for (auto gust : najgusci)
    {
        cout << gust << " ";
    }

    cout << endl;
    return 0;
}