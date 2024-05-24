#include <iostream>
#include <numeric>
using namespace std;

int gcdenominator(int a, int b) {
    return (a / gcd(a, b)) * b;
}