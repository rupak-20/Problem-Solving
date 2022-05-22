class Solution {
public:
    int longest(string s, char c) {
        int res = 0, temp = 0;
        
        for(int i=0; i<s.length(); i++) {
            if(s[i] == c)
                temp++;
            else temp = 0;
            
            res = max(temp , res);
        }
        
        return res;
    }
    
    bool checkZeroOnes(string s) {
        int o = 0, z = 0;
        
        o = longest(s, '1');
        z = longest(s, '0');
        
        return o>z;
    }
};