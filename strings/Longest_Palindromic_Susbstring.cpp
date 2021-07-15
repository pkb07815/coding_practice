class Solution {
public:
    
 
    
    //EXPAND AROUND CORNER  o(n^2) (1)
    
   
    
    string longestPalindrome(string s) {
        
        string res="";
    
        for(int i=0;i<s.length();i++) {
            
            string tmp = expandaroundcorner(s,i,i);
            
            if(tmp.length()>res.length())
                res=tmp;
            
            tmp = expandaroundcorner(s,i,i+1);
            
            if(tmp.length()>res.length())
                res=tmp;
            
            
        
        }
        
        return res;
        
    }
    
     string expandaroundcorner(string s,int l, int h) {
        
        
        while(l>=0 && h < s.length() && s[l]==s[h]){
            
            l--;
            h++;
        }
        
         
        return s.substr(l+1,h-l-1);
        
    }
};
