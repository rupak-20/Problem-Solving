class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        if(s.size() - nums.size() == 0)
            return false;
        else return true;
    }
};