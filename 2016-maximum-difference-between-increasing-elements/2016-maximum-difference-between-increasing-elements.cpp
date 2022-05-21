class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int res = -1, n = nums.size(), mini = nums[0];
        
        for(int i=0; i<n; i++) {
            res = max(res, nums[i]-mini);
            mini = min(mini, nums[i]);
        }
        
        return res == 0 ? -1 : res;
    }
};