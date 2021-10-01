class Solution {
public:
    bool isPalindrome(string s) {
        bool ispal = true;
        string t;
        
        for(int i=0; i<s.length(); i++) {
            if(isalnum(s[i]))
                t.push_back(tolower(s[i]));
        }
        
        for(int i=0; i<t.length()/2; i++) {
            if(t[i] != t[t.length()-i-1])
                ispal = false;
        }
        
        return ispal;
    }
};