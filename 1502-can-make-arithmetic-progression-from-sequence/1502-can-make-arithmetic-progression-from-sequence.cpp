class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if(arr.size() == 2)
            return true;
        
        sort(arr.begin(), arr.end());
        int d = arr[1] - arr[0], a = arr[0], n = arr.size();
        bool res = true;
        
        for(int i=2; i<n; i++) {
            if(arr[i] != a + i*d) {
                res = false;
                break;
            }
        }
        
        return res;
    }
};