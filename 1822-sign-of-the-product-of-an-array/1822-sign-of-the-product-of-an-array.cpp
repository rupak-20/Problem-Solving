class Solution {
public:
    int arraySign(vector<int>& nums) {
        int product = 1;
        
        for(auto x : nums) {
            if(x == 0) {
                product = 0; break;
            }
            
            product *= x/(abs(x));
        }
        
        if(product > 0) return 1;
        if(product == 0) return 0;
        else return -1;
    }
};