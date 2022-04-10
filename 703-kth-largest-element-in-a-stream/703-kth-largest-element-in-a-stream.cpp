class KthLargest {
    int n;
    priority_queue<int, vector<int>, greater<int>> pq;
    
public:
    KthLargest(int k, vector<int>& nums) {
        n = k;
        auto end = nums.begin() + min(k, (int)nums.size());
        pq = priority_queue<int, vector<int>, greater<int>> (nums.begin(), end);
        
        for(int i=k; i<nums.size(); i++) {
            pq.push(nums[i]);
            pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(val);
        
        if(pq.size() > n)
            pq.pop();
        
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */