class Solution {
public:
    
    double power(double x, int n)
    {
        if (n == 0)
            return 1;
        
        if (n % 2 == 0)
            return power(x * x, n/2);
        
        else
            return x * power(x * x, n/2);
    }
    
    double myPow(double x, int n) {
        int temp = n;
        double result = power(x, n);
        
        if(temp < 0)
            result = (double)1/result;
        
        return result;
    }
};