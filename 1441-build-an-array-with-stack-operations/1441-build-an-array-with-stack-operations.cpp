class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        
        int itr = 0;
        for(int i=1; i<=n; i++) {
            res.push_back("Push");
            
            if(target[itr] != i)
                res.push_back("Pop");
            
            else itr++;
            
            if(itr == target.size())
                break;
        }
        
        return res;
    }
};