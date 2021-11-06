class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        
        if(nums.size()==0)
            return res;
        
        int start=nums[0];
        bool f= false;
        
        for(int i=0; i<nums.size(); i++){
            
            if(i==nums.size()-1 || nums[i]+1 != nums[i+1]) {
                if(start==nums[i])
                    res.push_back(to_string(start));
                
                else
                    res.push_back(to_string(start)+"->"+to_string(nums[i]));
                if(i<nums.size()-1)
                    start = nums[i+1];
            }
        }
        return res;
    }
};