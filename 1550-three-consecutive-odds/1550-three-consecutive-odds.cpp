class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int odd = 0, n = arr.size(); 
        
        for(int i = 0; i < n && odd < 3; i++) {
            if(arr[i]%2)
                odd++; 
            else
                odd = 0;
        }
        
        return odd == 3;
    }
};