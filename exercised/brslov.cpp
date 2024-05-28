#include <iostream>
using namespace std;

string brj[20] = {"nula", "jedan", "dva", "tri", "cetiri", "pet", "sest", "sedam", "osam", "devet", "deset", 
                "jedanaest", "dvanaest", "trinaest", "cetrnaest", "petnaest", "sesnaest", "sedamnaest", 
                "osamnaest", "devetnaest"};

string rendanje(int desetica) {
    if(desetica == 4)
        return "cetrdeset";
    else if(desetica == 5)
        return "pedeset";
    else if(desetica == 9)
        return "devedeset";
    else
        return brj[desetica] + brj[10];
}

int main() {
    int br;
    cin >> br;

    if(br >= 0 && br <= 19)
        cout << brj[br] << endl;
    else if(br >= 20) {
        int br2 = br % 10;
        br /= 10;
        int br1 = br % 10;

        if(br1 == 0) {
            cout << rendanje(br2);
            return 0;
        }

        cout << rendanje(br1) << " " << brj[br2] << endl;
    }
    
    return 0;
}