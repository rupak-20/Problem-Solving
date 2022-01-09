class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        set<vector<int>> dup;
        
        for(int i=0; i<nums.size(); i++) {
            int j=i+1, k=nums.size()-1;
            vector<int> sum;
            
            while(j<k) {
                if(nums[i] + nums[j] + nums[k] == 0) {
                    sum.push_back(nums[i]);
                    sum.push_back(nums[j]);
                    sum.push_back(nums[k]);
                    
                    if(dup.find(sum) == dup.end()) {
                        dup.insert(sum);
                        res.push_back(sum);
                    }
                    
                    sum.clear();                    
                    k--; j++;
                }
                
                else if(nums[i] + nums[j] + nums[k] < 0) {
                    j++;
                }
                
                else if(nums[i] + nums[j] + nums[k] > 0) {
                    k--;
                }
            }
        }
        
        return res;
    }
};