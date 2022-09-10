class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size() ;
        vector<int> temp(n) ;
        k = k % n ;
        int i ;
        for(i=0 ; i<k ; ++i){
            temp[i] = nums[n-k+i] ; 
        }
        for(int j=0 ; j<n-k ; j++)
            temp[i+j] = nums[j] ; 
        nums = temp ;
    }
};