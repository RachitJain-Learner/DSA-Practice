class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size() ;
        
        int s = 0 , e = n-1 ;
        
        while(s < e){
            
            int mid = s + (e-s)/2 ;
            
            if(nums[0] <= nums[mid])
                s = mid + 1;
            else
                e = mid ;
        }
        if(nums[e]>nums[0])
            return nums[0] ;
        
        else if(nums[e]>nums[n-1])
            return nums[n-1] ;
        else
            return nums[e] ;
    }
};