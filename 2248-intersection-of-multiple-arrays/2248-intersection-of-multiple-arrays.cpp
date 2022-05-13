class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int, int> m;
        vector<int> res;
        int n = nums.size();
        
        for(auto num: nums)
            for(auto i: num)
                m[i]++;
        
        for(auto i: m)
            if(i.second == n)
                res.push_back(i.first);
        
        sort(res.begin(), res.end());
        
        return res;
    }
};