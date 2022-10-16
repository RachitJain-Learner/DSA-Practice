class Solution {
private:
    int reverse(int x){
        int num = 0 ;
        while(x){
            num = num*10 + x%10  ;
            x/=10 ;
        }
        return num ;
    }
public:
    bool sumOfNumberAndReverse(int num) {
        for(int i=num; i>=num/2 ; --i){
            int rev = reverse(i) ;
            if(i + rev == num) return true ;
        }
        return false ;
    }
};