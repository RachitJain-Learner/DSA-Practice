class Solution {
private:
    void solve(vector<int> nums, vector<int>output, vector<vector<int>> &ans, int i){
        if(i >= nums.size()){
            ans.push_back(output);      
            return ;
        }
        solve(nums, output, ans, i+1);  //exclude 
        
        output.push_back(nums[i]);     //include
        solve(nums, output, ans, i+1);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>output ;
        vector<vector<int>> ans ;
        int index = 0 ;
        
        solve(nums, output, ans, index);
        
        return ans ;
    }
};