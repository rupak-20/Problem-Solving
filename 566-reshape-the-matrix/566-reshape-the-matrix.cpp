class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(r*c != mat.size()*mat[0].size())
            return mat;
        
        vector<int> temp;
        vector<vector<int>> res;
        
        for(auto i: mat) {
            for(auto j : i)
                temp.push_back(j);
        }
        
        int k=0;
        for(int i=0; i<r; i++) {
            vector<int> row;
            for(int j=0; j<c; j++)
                row.push_back(temp[k++]);
            
            res.push_back(row);
        }
        
        return res;
    }
};