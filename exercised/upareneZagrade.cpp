// stack easy
#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string tekst;
    getline(cin, tekst);

    stack<char> zagrade;

    for (char c : tekst) {
        if (c == '(' || c == '{' || c == '[') {
            zagrade.push(c);
        } else {
            if (zagrade.empty() || (c == ')' && zagrade.top() != '(') || (c == '}' && zagrade.top() != '{') || (c == ']' && zagrade.top() != '[')) {
                cout << "ne\n";
                return 0;
            } else zagrade.pop();
        }
    }

    if(zagrade.empty()) cout << "da\n";
    else cout << "ne\n";
    
    return 0;
}