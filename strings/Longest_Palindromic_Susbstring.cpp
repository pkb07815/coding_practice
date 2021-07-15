class Solution {
public:
    
    // BRUTE FORCE
//     bool ispalindrome(string s, int low,int high) {
        
        
//         while(low<high) {
            
//             if(s[low] != s[high])
//                 return false;
            
//             low++;
//             high--;
            
//         }
        
//         return true;
        
//     }
//     string longestPalindrome(string s) {
        
//         int _max=0;
//         string temp1;
//         for(int i=0; i<s.length();i++)
//         {
            
//             for(int j=0;j<s.length();j++)
//             {
//                 string temp=s.substr(i,j-i+1);
                
//                 cout<<"temp"<<" "<<temp<<endl;
//                 if(ispalindrome(temp,0,temp.length()-1))
//                    {
//                        if(temp.length() > _max)
//                        {
//                            temp1=temp;
                           
//                            _max = temp.length();
                           
//                            cout<<"temp1"<<temp1;
//                        }
                       
                    
//                    }
                
//             }
//         }
        
//         return temp1;
        
//     }
    
    //EXPAND AROUND CORNER
    
   
    
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
