class Solution {
private:
    void solve(int pos, vector<int>& nums, vector<vector<int>>& ans){
        if(pos >= nums.size())
            ans.push_back(nums) ;
        
        for(int i=pos ; i<nums.size() ; ++i){
            swap(nums[pos], nums[i]) ;
            solve(pos+1, nums, ans);
            swap(nums[pos], nums[i]) ;
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans ;
        solve(0, nums, ans);
        return ans ;
    }
};