#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>
using namespace std;

int main() {
    vector<int> br;

    while(br.size() != 4) {
        char c = getchar();
        if(isdigit(c))
            br.push_back(c - '0');
    }
    
    int parova = 0;

    for(auto it = br.begin(); it != next(br.begin(), 2); ++it) {
        int par = count(br.begin(), br.end(), *it);
        if(par == 2)
            parova++;
    }

    cout << parova << endl;
    return 0;
}