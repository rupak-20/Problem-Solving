class Solution {
public:
    int longestPalindrome(string s) {
        int lp=0, odd=0;
        vector<int> letter(52);
        
        for(int i=0; i<s.length(); i++) {
            int t = (int)s[i];
            
            if(t <= 90) {
                ++letter[t - 65];
                if(letter[t-65] == 2) {
                    lp += 2;
                    letter[t-65] -= 2;
                    --odd;
                }
                else odd++;
            }
            else {
                ++letter[t - 72];
                if(letter[t-72] == 2) {
                    lp += 2;
                    letter[t-72] -= 2;
                    odd-=3;
                }
                else odd+=3;
            }
        }
        
        if(odd==0)
            return lp;
        else return lp+1;
    }
};