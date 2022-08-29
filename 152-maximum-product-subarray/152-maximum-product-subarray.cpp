class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int ans = INT_MIN ;
        int prodfromStart = 1, prodfromEnd = 1 ;
        
        int n = nums.size() ;
        
        for(int i = 0; i<n ; i++){
            prodfromStart *= nums[i] ;
            prodfromEnd *= nums[n-1-i] ;
            
            ans = max(ans, max(prodfromEnd, prodfromStart)) ;
            
            if(prodfromStart == 0)
                prodfromStart = 1 ;

            if(prodfromEnd == 0)
                prodfromEnd = 1 ;
        }
        return ans ;
    }
};