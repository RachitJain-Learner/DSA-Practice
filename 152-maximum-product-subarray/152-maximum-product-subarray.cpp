class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int ans = nums[0] ;
        int leftProduct = 0, rightProduct = 0;
        
        int n = nums.size() ;
                
        for (int i = 0; i < n; i++) {
            leftProduct =  (leftProduct ? leftProduct : 1) * nums[i];
            
            rightProduct = (rightProduct ? rightProduct : 1) * nums[n-1-i];
            
            ans = max({leftProduct, rightProduct, ans}) ; 
        }
        return ans ;
    }
};