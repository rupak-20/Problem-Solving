class Solution {
public:    
    vector<int> twoSum(vector<int>& arr, int t) {
        int start = 0, stop = arr.size()-1;
        vector<int> r;
        
        while(arr[start] + arr[stop] != t) {
            
            if(arr[start] + arr[stop] < t)
                start++;
            
            if(arr[start] + arr[stop] > t)
                stop--;
        }
        
        r.push_back(start+1);
        r.push_back(stop+1);
        
        return r;
    }
};