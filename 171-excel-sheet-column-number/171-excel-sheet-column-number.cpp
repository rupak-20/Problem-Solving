class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0, p = 0;
        
        for(int i=columnTitle.size()-1; i>=0; i--) {
            res += pow(26, p) * ((int)columnTitle[i] - 64);
            p++;            
        }
        
        return res;
    }
};