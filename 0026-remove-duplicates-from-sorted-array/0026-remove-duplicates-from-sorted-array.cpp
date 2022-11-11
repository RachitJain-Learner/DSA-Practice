class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int i = 0, j = 1 ;
        for(; i < nums.size()-1 ; ++i){
            if(nums[i] != nums[i+1])
                nums[j] = nums[i+1] , j++ ;
        }
        return j ;
    }
};