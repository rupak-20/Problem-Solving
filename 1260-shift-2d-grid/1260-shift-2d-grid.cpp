class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> temp;
        int m = grid.size(), n = grid[0].size();
        
        // copy the gird to a vector
        for(auto row : grid) {
            for(auto col : row) {
                temp.push_back(col);
            }
        }
        
        k = k % temp.size();
        
        if(k==0) return grid;       // return grid if k = 0 (no shifting)
        int idx = m*n - k;
        
        // shift the numbers in the grid
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                
                grid[i][j] = temp[idx];
                idx = (idx+1)%(m*n);
            }
        }
        
        return grid;
    }
};