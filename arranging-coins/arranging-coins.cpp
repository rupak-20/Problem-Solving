class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;
        while(n>0) {
            n= n-i;
            if(n>=i+1)
            i++;
            else break;
        }
        
        return i;
    }
};