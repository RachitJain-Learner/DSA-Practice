class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int res = 0 , sum = 0 ;
        unordered_set<int> s ;
        int j = 0 ;
        
        for(int i=0 ; i<nums.size() ; i++){
            
            while(s.count(nums[i])){
                sum -= nums[j] ;
                s.erase(nums[j]) ;
                j++ ;
            }
            s.insert(nums[i]);
            sum += nums[i] ;
            res = max(res , sum) ;
        }
        return res ;
    }
};