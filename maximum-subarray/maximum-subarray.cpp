class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int i = 1, max = nums[0], sum = nums[0], size = nums.size();

        while(i < size){
            
            sum += nums[i];
            
            if(nums[i] > sum) {
                sum = nums[i];
            }
            
            if(max < sum) {
                max = sum;
            }
            
            i++;
        }

        return max;

    }
};