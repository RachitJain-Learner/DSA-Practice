class Solution {
public:
    int maxProduct(vector<int>& nums) {
	    int n = nums.size() ;
        int ans = nums[0], prodfromleft = 1, prodfromRight = 1 ;
        
        for(int i = 0; i<n ; i++){
            prodfromleft *= nums[i] ;
            prodfromRight *= nums[n-1-i] ;
            
            ans = max({prodfromleft, prodfromRight, ans}) ;
            
            if(prodfromleft == 0) prodfromleft = 1 ;
            if(prodfromRight == 0) prodfromRight = 1 ;
        }
        return ans ;
    }
};