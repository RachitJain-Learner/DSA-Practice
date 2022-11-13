class Solution {
    
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_set<char> freq;       
        int n = s.length(), ans = 0 ;	
        int i = 0, j = 0 ;
        
        while(j < n){
            if(!freq.count(s[j])){
                freq.insert(s[j]) ;
                j++ ;
                ans = max(ans, int(freq.size())) ;
            }
            else{
                freq.erase(s[i]) ;
                i++ ;
            }
            
        }
        return ans ;
    }
};