class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
            return 1;
        if(n==1)
            return 0;
        
        int i=2;
        while(i<=n) {
            i*=2;
        }
        
        return n^(i-1);
    }
};