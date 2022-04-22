class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false ;
        
        long int num = x ;
        long int rem ,ans = 0 ;
        while(num){
            rem = num % 10 ;
            ans = rem + ans*10 ; 
            num = num/10 ;
        }
        if(x == ans)
            return true  ;
        else 
            return false ;
    }
};