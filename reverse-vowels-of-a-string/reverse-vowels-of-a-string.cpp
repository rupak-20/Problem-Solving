class Solution {
public:
    string reverseVowels(string s) {
        char* v=&s[0];
        int i=0, j=s.length()-1;
        
        while(i<j) {
            if(v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u' || v[i] == 'A' || v[i] == 'E' || v[i] == 'I' || v[i] == 'O' || v[i] == 'U') {
                
                if(v[j] == 'a' || v[j] == 'e' || v[j] == 'i' || v[j] == 'o' || v[j] == 'u' || v[j] == 'A' || v[j] == 'E' || v[j] == 'I' || v[j] == 'O' || v[j] == 'U') {
                    
                    char temp = v[i];
                    v[i] = v[j];
                    v[j] = temp;
                    
                    i++; j--;
                    
                }
                
                else j--;
            }
            
            else i++;
        }
        
        return s;
    }
};