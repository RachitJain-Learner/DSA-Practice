class Solution {
public:
    bool helper(int target, long long n){
        int sum = 0 ;
        while(n){
            sum += n%10 ;
            n /= 10 ; 
        }
        return sum <= target ;
    }
    long long makeIntegerBeautiful(long long n, int target) {
        long long sum = 0, temp = 10 ;
        while(true){
            if(helper(target, n)) return sum ;
            else {
                long long n1 = temp - (n % temp) ;
                n += n1 ;
                sum += n1 ;
                temp *= 10 ; 
            }
        }
        return sum ;
    }
};