class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int result = nums.size() , i = 0 ;
        
        for(int num:nums){
            result ^= num; 
            result ^= i; 
            i++; 
        }
        return result; 
    }
};