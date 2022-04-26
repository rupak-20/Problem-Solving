class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length())
            return false;
        
        unordered_map<char, char> m;
        
        for(int i=0; i<s.length(); i++) {
            // if the character has been mapped
            if(m.find(s[i]) != m.end()) {
                // if the character is mapped to a different t[i] return false
                if(m[s[i]] != t[i])
                    return false;
            }
            
            else
                m[s[i]] = t[i];
        }
        
        set<char> done;
        for(auto x : m)
            done.insert(x.second);
        
        // if one character in s is mapped to multiple characters in t return false
        if(done.size() != m.size())
            return false;
        
        return true;
    }
};