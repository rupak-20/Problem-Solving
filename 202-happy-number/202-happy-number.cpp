class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, int> check;
        
        while(1) {
            int sum = 0;
            while(n) {
                sum += (n%10)*(n%10);
                n = n/10;
            }
            n = sum;
            // cout<<n<<" is n here\n";
            
            if(check[n]==1)
                return false;
            
            check[n] = 1;
            
            if(n==1)
                return true;
        }
    }
};