class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;

        for(auto i : tokens) {
            if(i == "+" || i == "-" || i == "*" || i == "/") {
                int a = stk.top(); stk.pop();
                int b = stk.top(); stk.pop();
                
                if(i == "+")
                    stk.push(b + a);
                else if(i == "-")
                    stk.push(b - a);
                else if(i == "*")
                    stk.push(b * a);
                else
                    stk.push(b / a);
            }
            
            else {
                stringstream s;
                int temp;
                s<<i;
                s>>temp;
                stk.push(temp);
            }
        }
        
        return stk.top();
    }
};