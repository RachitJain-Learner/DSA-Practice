class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int i = 0, j = 0 ;
        for(; i < nums.size() ; i++){
            if(nums[i] != nums[j]){
                
                j++ ;
            }
            nums[j] = nums[i] ;
        }
        return j + 1 ;
    }
};




// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {

//         int i = 0, j = 0 ;
//         for(; i < nums.size() ; i++){
//             if(nums[i] != nums[i+1]){
//                 nums[j] = nums[i] ;
//                 j++ ;
//             }
//         }
//         return (j == 0) ? 1 : j ;
//     }
// };