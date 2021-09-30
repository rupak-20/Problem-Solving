class Solution {
public:
    vector<int> getRow(int n) {
        
        if(n == 0)
            return {{1}};
        vector<vector<int>> res = {{1}, {1,1}};
        
        for(int i=2; i<n+1; i++){
            vector<int> row;
			row.push_back(1);
            for(int j=0; j<i-1; j++){
                row.push_back(res[i-1][j] + res[i-1][j+1]);
            }
            row.push_back(1);
            res.push_back(row);
            row.clear();
        }
        return res[n];
    }
};