class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int i, n = points.size(), s = INT_MAX, flag = -1;
        
        for(i=0; i<n; i++) {
                if(points[i][0] == x || points[i][1] == y)
                    if(s >  abs(points[i][0] - x) + abs(points[i][1] - y)) {
                        flag = i;
                        s =  abs(points[i][0] - x) + abs(points[i][1] - y);
                    }
            }
        
        return flag;
    }
};