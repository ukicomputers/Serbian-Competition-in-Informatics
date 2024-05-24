#include <vector>
using namespace std;

bool isGraphConnected(vector<vector<int>> &graf, vector<bool> &posecen, int odKoga, int doCega) {
    if(odKoga == doCega)
        return true;
    if(posecen[odKoga])
        return false;
    posecen[odKoga] = true;

    for(int odTamo : graf[odKoga])
        if(isGraphConnected(graf, posecen, odTamo, doCega))
            return true;
    
    return false;
}