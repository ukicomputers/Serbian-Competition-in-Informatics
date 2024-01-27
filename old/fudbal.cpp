#include <iostream>
using namespace std;

int main() {
    int ab = 0, ba = 0;
    int cd = 0, dc = 0;
    int ac = 0, ca = 0;
    int bd = 0, db = 0;
    int ad = 0, da = 0;
    int bc = 0, cb = 0;

    cin >> ab >> ba;
    cin >> cd >> dc;
    cin >> ac >> ca;
    cin >> bd >> db;
    cin >> ad >> da;
    cin >> bc >> cb;

    int a1 = 0, a2 = 0;
    int b1 = 0, b2 = 0;
    int c1 = 0, c2 = 0;
    int d1 = 0, d2 = 0;

    if(ab > ba) {
        a1 += 3;
        b2 += ab - ba;
    } else if(ba > ab) {
        b1 += 3;
        a2 += ba - ab;
    } else if(ab == ba) {
        a1++;
        b1++;
    }

    if(cd > dc) {
        c1 += 3;
        d2 += cd - dc;
    } else if(dc > cd) {
        d1 += 3;
        c2 += dc - cd;
    } else if(dc == cd) {
        d1++;
        c1++;
    }
    
    if(ac > ca) {
        a1 += 3;
        c2 += ac - ca;
    } else if(ca > ac) {
        c1 += 3;
        a2 += ca - ac;
    } else if(ca == ac) {
        c1++;
        a1++;
    }

    if(bd > db) {
        b1 += 3;
        d2 += bd - db;
    } else if(db > bd) {
        d1 += 3;
        b2 += db - bd;
    } else if(bd == db) {
        b1++;
        d1++;
    }

    if(ad > da) {
        a1 += 3;
        d2 += ad - da;
    } else if(da > ad) {
        d1 += 3;
        a2 += da - ad;
    } else if(ad == da) {
        a1++;
        d1++;
    }

    if(bc > cb) {
        b1 += 3;
        c2 += bc - cb;
    } else if(cb > bc) {
        c1 += 3;
        b2 += cb - bc;
    } else if(cb == bc) {
        c1++;
        b1++;
    }

    cout << a1 << " " << a2 << endl;
    cout << b1 << " " << b2 << endl;
    cout << c1 << " " << c2 << endl;
    cout << d1 << " " << d2 << endl;

    return 0;
}