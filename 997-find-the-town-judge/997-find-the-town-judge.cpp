class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> town(n+1, 0);
        
        for (auto t : trust) {
            town[t[0]]--;
            town[t[1]]++;
        }
        
        for (int i = 1; i <= n; i++)
            if (town[i] == n-1) return i;
        
        return -1;
    }
};