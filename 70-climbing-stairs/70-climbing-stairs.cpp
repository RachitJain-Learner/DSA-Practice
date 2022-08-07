class Solution {
public:
    int climbStairs(int n) {
        
        if(n== 0 || n== 1)
            return 1;
        
        int n1 = 1 , n2 = 1 , sum = 0 ;
        
        for(int i=2 ; i<=n ; i++){
            sum = n1 + n2 ;
            n1 = n2 ;
            n2 = sum ;
        }
        return sum ;
    }
};
