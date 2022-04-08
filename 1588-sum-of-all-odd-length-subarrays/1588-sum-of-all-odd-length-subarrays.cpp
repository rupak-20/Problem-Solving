class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int res = 0;
        
        // prefix sum array
        for(int i = 1; i < arr.size(); i++) {
            arr[i] += arr[i-1];
        }
        
        // sliding window to get the sum
        for(int window = 1; window <= arr.size(); window += 2) {
            int begin = 0, end = window-1;
            
            while(end < arr.size()) {
                res += arr[end] - (begin > 0 ? arr[begin-1] : 0);
                begin++; end++;
            }
        }
        
        return res;
    }
};