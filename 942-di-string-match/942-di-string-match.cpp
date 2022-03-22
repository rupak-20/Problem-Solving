class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> res;        // resultant array
        int i = 0, d = s.length();
        
        for(auto x : s) {
            // if 
            if(x == 'I')
                res.push_back(i++);
            else
                res.push_back(d--);
        }
        
        res.push_back(i);       // push back i at the last
        
        return res;
    }
};