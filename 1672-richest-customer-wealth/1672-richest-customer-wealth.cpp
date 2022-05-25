class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res = 0;
        for(auto i: accounts) {
            int sum = 0;
            for(auto j: i)
                sum += j;
            res = max(res, sum);
        }
        
        return res;
    }
};