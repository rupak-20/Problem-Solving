class Solution {
public:
    
    int removeDuplicates(vector<int>& nums) {
        int ref = 0, n = nums.size(), k=0;
        
        if(n == 0 || n == 1)
            return n;
        
        for(int i=0; i<n; i++) {
            if(nums[i] == nums[ref])
                continue;
            
            else if(ref < n-1){
                nums[ref+1] = nums[i];
                ref++;
                k++;
            }
        }
        return k+1;
    }
};