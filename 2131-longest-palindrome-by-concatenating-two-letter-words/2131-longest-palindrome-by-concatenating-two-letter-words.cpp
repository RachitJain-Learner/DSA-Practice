class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string, int> mp ;
        
        for(string w: words)
            mp[w]++ ;
        
        int ans = 0, flag = 0 ;
        
        for(auto it: mp){
            string s = it.first ;
            string tmp = s ;
            
            reverse(tmp.begin(), tmp.end()) ;
            
            if(s == tmp){
                ans += mp[s] / 2 ;
                if(mp[s] % 2) flag = 1 ;
            }
            else{                                         //notes --->
                if(mp.count(tmp)){
                    ans += min(mp[s], mp[tmp]) ;
                    mp.erase(tmp) ;
                }
            }
        }
        ans = ans * 4 ;
        
        if(flag == 1) ans += 2 ;
        
        return ans ;
    }
}; 