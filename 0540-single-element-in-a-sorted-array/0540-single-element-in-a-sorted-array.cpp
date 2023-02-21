class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size() ;
        int low = 0 , high = n - 2 ;
        int mid ;

        while(low <= high){
            mid = low + (high-low)/2 ;

            if(nums[mid] == nums[mid^1])
                low = mid + 1 ;
            else
                high = mid - 1 ;
        }
        return nums[low] ;
    }
};