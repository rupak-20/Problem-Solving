class Solution {
public:
    // check if the string is a palindrome
    bool solve(string s, int start, int end) {
        while(start<end) {
            if(s[start]!=s[end])
                return false;
            start++; end--;
        }
        
        return true;
    }
    
    bool validPalindrome(string s) {
        int start = 0, end = s.length()-1;
        
        while(start<end) {
            // if the characters are not same then skip the character at either start or end index
            // and check again
            if(s[start]!=s[end]) {
                return solve(s, start+1, end) || solve(s, start, end-1);
            }
            start++; end--;
        }
        
        return true;    // return true if all characters are same
    }
};