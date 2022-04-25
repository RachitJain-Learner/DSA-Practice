class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length() ;
        
        int i = 0 , j ;
        while(i < n){
            j = 0 ;
            while(j<n){
                if(s[i] == s[j] && i!=j)
                    break ;
                j++ ;
            }
            if(j == n)
                return i ;
            i++ ;
        }
        return -1 ;
    }
};