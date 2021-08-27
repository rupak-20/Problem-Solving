class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = nums.size() - 1, i = 0;
        
       while(i<=j) {
            
            if(nums[i] != val)
                i++;
            
            else {
                nums[i] = nums[j];
                j--;
            }
        }
        
        return j+1;
    }
};