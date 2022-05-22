class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int, int> m;
        set<int> arr1(nums1.begin(), nums1.end()), arr2(nums2.begin(), nums2.end()), arr3(nums3.begin(), nums3.end());
        
        vector<int> res;
        
        for(auto i : arr1)
            m[i]++;
        
        for(auto i: arr2)
            m[i]++;
        
        for(auto i: arr3)
            m[i]++;
        
        for(auto i=m.begin(); i!=m.end(); i++)
            if(i->second >= 2)
                res.push_back(i->first);
        
        return res;
    }
};