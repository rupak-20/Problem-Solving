class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = 0, len = s.length(), wordlen = 0;
        bool lastletter = false;
        
        while(len--) {            
            if(s[len] == ' ' && !lastletter)
                continue;
            
            if(s[len] != ' ') {
                ++wordlen;
                lastletter = true;
            }
            else 
                break;
        }
        
        return wordlen;
    }
};