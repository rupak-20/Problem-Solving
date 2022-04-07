class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> p;
        
        for(auto x: stones) {
            p.push(x);
        }
        
        // while(true) smash stones
        while(1) {
            
            // if only one stone remains then return the weight of the stone
            if(p.size() == 1)
                return p.top();
            
            // else return 0 if no stone remains
            else if(p.size() == 0)
                return 0;
            
            int x = p.top();
            p.pop();
            int y = p.top();
            p.pop();
            
            if(x==y)
                continue;
            
            else {
                x -= y;
                p.push(x);
            }            
        }
    }
};