class Solution {
public:
    string breakPalindrome(string p) {
        int sz = p.size() ;
        if (sz <= 1) return "";
        
        for (int i=0; i < sz/2; i++) {
            if (p[i] > 'a')  {
                p[i] = 'a';
                return p;
            }
        }
        p[sz-1] = 'b' ;
        return p;
    }
};