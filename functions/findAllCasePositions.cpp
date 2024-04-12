#include <vector>
using namespace std;

vector<int> findAllCasePositions(const auto &beginIt, const auto &endIt, const auto &what) {
    vector<int> results;
    auto it = find(beginIt, endIt, what);

    while (it != source.end()) { 
        int pos = it - beginIt;
        results.push_back(pos);
        it = find(it + 1, endIt, what);
    }

    return results;
}