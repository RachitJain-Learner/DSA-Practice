class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int, int> mp ;
        vector<int> ans ;
        
        for(int i=0 ; i<nums.size() ; i++){
            
            int s = target - nums[i] ;
            
            if(mp.find(s) != mp.end()){
                ans = {i , mp[s]} ;
            }
            mp[nums[i]] = i ;
        }
        return ans ;
    }
};