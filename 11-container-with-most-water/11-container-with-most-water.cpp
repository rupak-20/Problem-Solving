class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = INT_MIN;
        
        for(int i=0, j=height.size()-1; i<j;) {
            if(area < (j-i)*min(height[i], height[j]))
                area = (j-i)*min(height[i], height[j]);
            
            if(height[i]<height[j]) i++;
            else j--;
        }
        
        return area;
    }
};