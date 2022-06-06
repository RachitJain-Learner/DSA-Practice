class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin() , nums.end()) ;
        int curr = 0 , res = 0 ;
        
        for(int i=0 ; i<nums.size() ; i++){
            if(s.find(nums[i]-1) == s.end()){
                curr = 1 ;
                while(s.count(nums[i]+curr)) ++curr ;
                
                res = max(res, curr) ;
            }
        }
        return res ;
    }
};