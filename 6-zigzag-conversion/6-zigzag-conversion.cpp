class Solution {
public:
    string convert(string s, int numRows) {
         
        if(numRows == 1) return s;

        vector<string> rows(min(numRows, int(s.length())));
                            
        int curr = 0;
        bool down = false;

        for (char c : s) {
            rows[curr] += c;
            if (curr == 0 || curr == numRows - 1) down = !down;
            curr += down ? 1 : -1;
        }

        string res;
        for (string row : rows) res += row;
        return res;
    }
};