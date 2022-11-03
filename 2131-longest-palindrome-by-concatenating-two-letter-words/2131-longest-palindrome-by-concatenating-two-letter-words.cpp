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
                ans += it.second/2 ;
                if(it.second % 2) flag = 1 ;
            }
            else{
                if(mp.count(tmp)){
                    ans += min(it.second, mp[tmp]), mp.erase(tmp) ;
                }
            }
        }
        ans = ans * 4 ;
        
        if(flag ) ans += 2 ;
        
        return ans ;
    }
}; 