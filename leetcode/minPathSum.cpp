class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(i == 0 && j == 0)
                    continue; //zato sto mi idemo od gornjeg levog ugla
                
                int duzinaNaLevo = INT_MAX;
                int duzinaNaGore = INT_MAX;

                if(i != 0) // zato sto tad ne mozemo gore
                    duzinaNaGore = grid[i][j] + grid[i - 1][j];
                
                if(j != 0) // isto, samo levo
                    duzinaNaLevo = grid[i][j] + grid[i][j - 1];
                
                // i sada kada smo sabrali, upisujemo min korak
                grid[i][j] = min(duzinaNaGore, duzinaNaLevo);
            }
        }

        return grid[m - 1][n - 1];
    }
};