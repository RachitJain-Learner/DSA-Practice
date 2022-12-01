class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length() ;
        int i=0 , j = n / 2 ;
        int cnt1 = 0 , cnt2 = 0 ;
        
        while(i < n){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' ||s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                if(i < n/2) cnt1++ ;
                else cnt2++ ;
            i++ ;
        }
        
        // while(i < n){
        //     if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' ||s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' )
        //         cnt2++ ;
        //     i++ ;
        // }
        
        return cnt1 == cnt2 ;
        
    }
};