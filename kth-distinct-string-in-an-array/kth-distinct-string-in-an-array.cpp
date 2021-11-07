class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> um;
        int kth = 0;
        
        for(int i=0; i<arr.size(); i++) {
            um[arr[i]]++;
        }
        
        for(int i=0; i<arr.size(); i++) {
            if(um[arr[i]] == 1) {
                ++kth;
                if(kth == k)
                    return arr[i];
            }
        }
        
        return "";
    }
};