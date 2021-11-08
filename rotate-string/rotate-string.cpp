class Solution {
public:
    bool rotateString(string s, string goal) {
        unordered_map<string, int> u;
        u[goal] = 1;
        
        for(int i=0; i<s.length()-1; i++) {
            rotate(s.begin(), s.begin()+1, s.end());
            cout<<s<<" "<<i<<"\n";
            if(u[s] == u[goal])
                return true;
        }
        
        return false;
    }
};