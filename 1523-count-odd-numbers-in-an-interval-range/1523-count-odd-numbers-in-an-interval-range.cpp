class Solution {
public:
    int countOdds(int low, int high) {
        if((high - low + 1)%2 == 0)
            return (int)(high - low + 1)/2;
        else if(low%2)
            return (int)(high - low)/2 + 1;
        else
            return (int)(high - low)/2;
    }
};