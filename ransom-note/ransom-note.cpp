class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> count(26);
        
        for(int i=0; i<magazine.length(); i++)
            count[magazine[i]-97]++;
        
        for(int i=0; i<ransomNote.length(); i++) {
            --count[ransomNote[i]-97];
            if(count[ransomNote[i]-97] < 0)
                return false;
        }
        
        return true;
    }
};