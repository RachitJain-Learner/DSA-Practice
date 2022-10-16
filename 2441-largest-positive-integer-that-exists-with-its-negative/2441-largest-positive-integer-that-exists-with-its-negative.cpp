class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n = nums.size() ;
        unordered_set<int> s(nums.begin(), nums.end()) ;
        
        int res = -1 ;
        for(int i=0 ; i<n ; ++i){
            if(s.find(-nums[i]) != s.end())
                res = max(res, nums[i]) ;
        }
        return res ;
    }
};
