class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        int res=0;
        
        for(auto x: ops) {
            if(x == "+") {
                int temp1 = s.top();
                s.pop();
                int temp2 = s.top();
                s.push(temp1);
                s.push(temp1 + temp2);   
                res += s.top();
            }
            
            else if(x == "D") {
                s.push(2*s.top());
                res += s.top();
            }
            
            else if(x == "C") {
                res -= s.top();
                s.pop();
            }
            
            else {
                s.push(stoi(x));
                res += s.top();
            }
        }
        
        return res;
    }
};