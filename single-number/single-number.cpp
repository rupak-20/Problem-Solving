class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int z=0;
        for(auto x: nums) z=z^x;
        
        return z;
    }
};