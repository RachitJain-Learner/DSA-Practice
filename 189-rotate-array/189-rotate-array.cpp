class Solution {
private:
    void revers(vector<int>& nums, int l, int r){
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
        
        revers(nums, 0, n-k-1) ;
        
        revers(nums, n-k, n-1) ;
        
        revers(nums, 0, n-1) ;
        
    }
};