class Solution {
public:
    char findTheDifference(string s, string t) {
        int c = 0, i;
        
        for(i=0; i<s.length(); i++) {
            c += (int)t[i] - (int)s[i];
        }
        c += (int)t[i];
        
        return (char)c;
    }
};