class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int> s ;                // 1.create an unordered set
        for(int i=1 ; i<nums.size() ; ++i){
            int sum = nums[i-1] + nums[i] ;   // 2.take sum of i and i-1 element 
            if(s.find(sum) != s.end())        // 3.check whether sum is present in set or not
                return true ;                 // 4.if present return true  
            else s.insert(sum) ;              // 5.else insert sum in the set
        }
        return false ;                        // 6.After traversing whole array, if sum is not found in the set, return false
    }
};