class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0, res;
        
        for(auto x: nums) {
            if(count==0)
                res = x;
            count += (x == res) ? 1: -1;
        }
        
        return res;
    }
};