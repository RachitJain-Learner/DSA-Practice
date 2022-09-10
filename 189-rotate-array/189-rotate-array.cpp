class Solution {
private:
    void reverse(vector<int>& nums, int l, int r){
        while(l < r){
            int t = nums[l] ; 
            nums[l] = nums[r] ;
            nums[r] = t ;
            
            l++ ;
            r-- ;
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size() ;
        k = k % n ;
        
        reverse(nums, 0, n-k-1) ;
        
        reverse(nums, n-k, n-1) ;
        
        reverse(nums, 0, n-1) ;
        
    }
};