class Solution {
public:
    vector<vector<int>> generate(int n) {
        if(n == 1)
            return {{1}};
        vector<vector<int>> res = {{1}, {1,1}};
        
        for(int i=2; i<n; i++){
			res.push_back({1});
            for(int j=0; j<res[i-1].size()-1; j++){
                res[i].push_back(res[i-1][j]+ res[i-1][j+1]);
            }
            res[i].push_back({1});
        }
        return res;
    }
};