class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        
        int i=0;
        while(i<word1.length() && i<word2.length()) {
            res = res + word1[i] + word2[i++];
        }
        
        while(i<word1.length())
            res = res + word1[i++];
        
        while(i<word2.length())
            res = res + word2[i++];
        
        return res;
    }
};