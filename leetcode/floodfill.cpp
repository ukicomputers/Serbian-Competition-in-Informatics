class Solution {
public:
    void oboj(vector<vector<int>>& matrica, int y, int x, int boja, int trazeniKlon) {
        if 
        (
            y < 0 ||                     // ako ide izvan limita granice, ovo je samo za leetcode, nece 100% biti takav in na petlji
            y > matrica.size() - 1 ||    // kada ja mu dodajem +? koordinate, da nepredje matricu
            x < 0 ||                     // isto
            x > matrica[0].size() - 1 || // isto samo za kolone umesto redova
            matrica[y][x] == boja ||     // zasto gubiti vreme ako je obojeno vec istom bojom
            matrica[y][x] != trazeniKlon // bojimo klonove samo samim sebi
        ) return; // ukoliko nesto nije kako mi zahtevamo, zavrsi izvrsavanje

        matrica[y][x] = boja; // posto kobajagi bojimo, drugi primer petljin zadatak A2 MATRICE - REVERS IGRA

        // sledece linije proveravaju cetiri smera koja sam rekao
        // gore, dole, levo, desno (u rekruzivnoj funkciji)
        oboj(matrica, y - 1, x, boja, trazeniKlon); // valjda znamo koordinatnu osu :)
        oboj(matrica, y + 1, x, boja, trazeniKlon);
        oboj(matrica, y, x - 1, boja, trazeniKlon);
        oboj(matrica, y, x + 1, boja, trazeniKlon);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int requiredClone = image[sr][sc]; // vrednost koju trezimo kao neki search
        oboj(image, sr, sc, color, requiredClone);
        return image;
    }
};