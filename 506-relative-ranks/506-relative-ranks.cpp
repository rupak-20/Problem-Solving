class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> res;
        map<int, string> m;
        
        for(int i=0; i<score.size(); i++) {
            m[score[i]] = to_string(i+1);
        }
        
        // give gold, silver and bronze medal
        int j=0;
        for(auto i=m.rbegin(); i!=m.rend(); i++) {
            if(j==0)
                i->second = "Gold Medal";
            else if(j==1)
                i->second = "Silver Medal";
            else if(j==2)
                i->second = "Bronze Medal";
            
            else
                i->second = to_string(j+1);
            
            j++;
        }
        
        // form the res list
            for(auto x: score) {
                res.push_back(m[x]);
        }
            
        return res;
    }
};