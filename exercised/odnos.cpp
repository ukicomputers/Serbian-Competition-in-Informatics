#include <iostream>
using namespace std;

int main() {
    string ab, bc, cd, de;
    cin >> ab >> bc >> cd >> de;

    string najmanji, najveci;

    if(ab == "<")
        najmanji += "a";
    else
        najveci += "a";

    if(ab == ">" && bc == "<")
        najmanji += "b";
    else if(ab == "<" && bc == ">")
        najveci += "b";

    if(bc == ">" && cd == "<")
        najmanji += "c";
    else if(bc == "<" && cd == ">")
        najveci += "c";

    if(cd == ">" && de == "<")
        najmanji += "d";
    else if(cd == "<" && de == ">")
        najveci += "d";
    
    if(de == ">")
        najmanji += "e";
    else
        najveci += "e";
    
    cout << najmanji << endl << najveci << endl;
    return 0;
}