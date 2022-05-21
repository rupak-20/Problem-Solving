class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int res = 0;
        vector<int> row(mat.size()), col(mat[0].size());
        
        for(int i=0; i<mat.size(); i++)
            for(int j=0; j<mat[0].size(); j++) {
                if(mat[i][j])
                {
                    ++row[i]; ++col[j];
                }
            }
        
        for(int i=0; i<mat.size(); i++)
            for(int j=0; j<mat[0].size(); j++)
                if(mat[i][j] && row[i] == 1 && col[j] == 1)
                    res++;
        
        return res;
    }
};