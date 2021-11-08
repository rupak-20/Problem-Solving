class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> u;
        
        for(int i=0; i<s.length(); i++) {
            ++u[s[i]];
        }
        
        for(int i=0; i<s.length(); i++) {
            if(u[s[i]] == 1)
                return i;
        }
        
        return -1;
    }
};