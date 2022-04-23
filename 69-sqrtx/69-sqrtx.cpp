class Solution {
public:
    int mySqrt(int x) {
        
    // if we put e = x/2 then 
    //     if(x==1)
    //         return 1 ;
        
        int s = 0 , e = x ;
        int ans ;
        
        while(s<=e){
            long long int m = s+(e-s)/2 ;
            
            if(m*m == x )
                return m ;
            
            if(m*m < x ){
                ans = m ;
                s = m+1 ;
            }
            else{
                e = m-1 ;
            }
        }
        return ans ;
    }
};