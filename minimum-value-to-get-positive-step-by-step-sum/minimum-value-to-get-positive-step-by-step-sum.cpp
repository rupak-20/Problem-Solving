class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int start = 1, step = start;
        
        for(int i=0; i<nums.size(); i++) {
            step += nums[i];
            if(step<=0) {
                start += 1 - step;
                step = 1;
            }
        }
        
        return start;
    }
};