class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m = 0, temp = 0;
        
        for(auto i : nums) {
            if(i == 1) {
                temp += 1;
                m = max(temp, m);
            }
            
            else
                temp = 0;
        }
        return m;
    }
};