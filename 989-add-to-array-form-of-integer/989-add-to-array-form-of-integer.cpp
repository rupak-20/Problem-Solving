class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        for(int j=num.size()-1; j>=0 && k>0; j--) {
            num[j] += k;
            k = num[j]/10;
            num[j] = num[j]%10;
        }
        
        while(k > 0) {
            num.insert(num.begin(), k%10);
            k /= 10;
        }
        
        return num;
    }
};