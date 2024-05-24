#include <unordered_map>
#include <cmath>
using namespace std;

void factorise(int broj, unordered_map<int, int> &gde) {
    for(int i = 2; i <= sqrt(broj); i++) {
        while (broj % i == 0) {
            gde[i]++;
            broj /= i;
        }
    }

    if(broj > 1)
        gde[broj]++;
}