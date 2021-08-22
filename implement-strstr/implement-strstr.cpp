class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int len_haystack = haystack.length();   //length of haystack
        int len_needle = needle.length();   //length of needle
        
        if(len_needle == 0)    //if needle is empty string
            return 0;
        
        for(int i=0; i<len_haystack; i++) {
            
            if(haystack[i] == needle[0]) {
                bool found = true;
                
                for(int j=0; j<len_needle; j++) {
                    
                    if(i+j > len_haystack) {
                        found = false;
                        break;
                        }
                    
                    if(haystack[i+j] != needle[j]) {
                        found = false;
                    }
                }
                //if all characters are same ie we found the needle
                if(found)
                    return i;
            }
            else
                continue;
        }
        
        return -1; //needle not found
    }
};