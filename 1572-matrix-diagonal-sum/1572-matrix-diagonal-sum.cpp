class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size(), res=0;
        
        for(int i=0;i<n;i++){
            if(i!=n-i-1)
                res+=mat[i][i]+mat[i][n-i-1];
            else
                res += mat[i][i];   
        }
        return res;
    }
};