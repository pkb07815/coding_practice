class Solution {
public:
  // O(n) s(n)
    int lengthOfLongestSubstring(string s) {
        
        unordered_set <char> chr;
        
        if(!s.length()) return 0;
        
        int count = 0;
        int low=0,high=0;
        
        while (high<s.length()) {
            
            if(chr.count(s[high]) == 0)
            {
                chr.insert(s[high]);
                
                cout << high<<endl;
                 if(chr.size() > count)
                count = chr.size();
                high++;
            }
            
            else {
                
                
                chr.erase(s[low]);
                low++;
            }
            
           
            
        }
        
        return count;
        
    }
};
