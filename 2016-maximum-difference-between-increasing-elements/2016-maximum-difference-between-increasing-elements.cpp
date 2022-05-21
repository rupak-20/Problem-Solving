class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int res = -1, n = nums.size();
        
        for(int i=0; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                if(nums[j] > nums[i] && res < nums[j] - nums[i])
                    res = nums[j] - nums[i];
            }
        }
        
        return res;
    }
};