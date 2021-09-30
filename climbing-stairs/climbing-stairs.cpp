class Solution {
public:
    int climbStairs(int n) {
        
        if(n == 1 || n == 2)
            return n;
        
        vector<int> v(n);
        v[0] = 1;
        v[1] = 2;
        int i = 2;
        for(i; i<n; i++)
            v[i] = v[i-1] + v[i-2];
        
        return v[i-1];
    }
};