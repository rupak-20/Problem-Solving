class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p1=0, p2=0, n=nums.size();
        
        while(p1<n && p2<n) {
            while(p2<n && nums[p1] == nums[p2]) {
                p2++;
            }
            
            if(p2>=n)
                return p1+1;
            
            nums[++p1] = nums[p2];
        }
        
        return p1+1;
    }
};