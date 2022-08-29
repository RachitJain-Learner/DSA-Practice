class Solution {
public:
    int maxProduct(vector<int>& nums) {
	    int n = nums.size() ;
        int ans = nums[0], prodfromStart = 1, prodfromEnd = 1 ;
        
        for(int i = 0; i<n ; i++){
            prodfromStart *= nums[i] ;
            prodfromEnd *= nums[n-1-i] ;
            
            ans = max({prodfromStart, prodfromEnd, ans}) ;
            
            if(prodfromStart == 0) prodfromStart = 1 ;
            if(prodfromEnd == 0) prodfromEnd = 1 ;
        }
        return ans ;
    }
};