class Solution {
public:
    void solve(int pos, vector<int>& nums, vector<vector<int>>& ans){
        if(pos >= nums.size())
            ans.push_back(nums) ;
        
        unordered_set<int> s;
        
        for(int i=pos ; i<nums.size() ; ++i){
            if(s.find(nums[i]) == s.end()){ //if(s.find(nums[i]) != s.end())continue 
                s.insert(nums[i]) ;
                
                swap(nums[pos], nums[i]) ;
                solve(pos+1, nums, ans) ;
                swap(nums[pos], nums[i]) ;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans; 
        solve(0, nums, ans) ;
        return ans;
    }
};