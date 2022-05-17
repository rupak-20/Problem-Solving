class Solution {
public:
    double average(vector<int>& salary) {
        int maxi = INT_MIN, mini = INT_MAX, n = salary.size(), i;
        double sum = 0;
        
        for(i=0; i<n; i++) {
            sum += salary[i];
            mini = min(salary[i], mini);
            maxi = max(salary[i], maxi);
        }
                       
        sum -= (maxi + mini);
        sum /= (i-2);
                       
        return sum;
    }
};