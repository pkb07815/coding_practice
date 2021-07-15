class Solution {
public:
    
    // brute force method  time n^3 space 1
    
    // ispalindrome to check if the substring is palindrome.
    bool ispalindrome(string s, int low,int high) {
  
        while(low<high) {
            
            if(s[low] != s[high])
                return false;
            
            low++;
            high--;
            
        }
        
        return true;
        
    }
    string longestPalindrome(string s) {
        
        int _max=0;
        string temp1;
        
        for(int i=0; i<s.length();i++)
        {
            
            for(int j=0;j<s.length();j++)
            {
                
                // substr function to get string part
                string temp=s.substr(i,j-i+1);
                
                cout<<"temp"<<" "<<temp<<endl;
                if(ispalindrome(temp,0,temp.length()-1))
                   {
                    // if it is palindrome then check if this substr length 
                    // is more than previous max. if that is true, then only update the _max
                    // and temp1.
                    
                       if(temp.length() > _max)
                       {
                           temp1=temp;
                           
                           _max = temp.length();
                           
                           cout<<"temp1"<<temp1;
                       }
                       
                    
                   }
                
            }
        }
        
        return temp1;
        
    }
};
