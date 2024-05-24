#include <numeric>
#include <vector>
using namespace std;

// Requires the array to have atleast 2 elements
int arrayGCD(vector<int> &array) {
    int result = array[0];
    for(int i = 1; i < array.size(); i++)
        result = gcd(result, array[i]);
    return result;
}