class Solution {
public:
    string orderlyQueue(string s, int k) {
        string ans = s;
        if (k == 1) {
            // "cba" -> "bac" -> "acb" -> "cba" -> ...
            // we only have N swaps here 
            // as it will become the original string after N swaps
            // hence, we can try all N possible swaps and find the lexicographically smallest one
            for (int i = 1; i < s.size(); i++) {
               ans = min(ans, s.substr(i) + s.substr(0, i));
            }
        } else 
            sort(ans.begin(),ans.end());
        
        return ans;
    }
};