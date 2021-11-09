class Solution {
public:
    int countSegments(string s) {
        if(s.length()==0)
            return 0;
        if(s.length()==1 && s[0]!=' ')
            return 1;
        if(s.length()==1 && s[0]==' ')
            return 0;
        
        int seg = 0, i;
        
        for(i=1; i<s.length(); i++) {
            if(s[i]==' ' && s[i-1]!=' ')
                seg++;
        }
        
        if(s[i-1]!=' ')
            return seg+1;
        else return seg;
    }
};