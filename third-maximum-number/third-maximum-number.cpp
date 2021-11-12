class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        nums.clear();
        for(auto x : s)
            nums.push_back(x);
        sort(nums.begin(), nums.end());
        
        if(nums.size()<3)
            return *max_element(nums.begin(), nums.end());
        
        else
            return nums[nums.size()-3];
    }
};