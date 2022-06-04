class Solution {
public:
    void helper(vector<int> &candidates, int B, int i, int sum, vector<int>temp, vector<vector<int>>& ans){
        
        if(sum == B){
            ans.push_back(temp) ;
            return ;
        }
        if(sum > B || i >= candidates.size())
            return ;
            
        helper(candidates, B, i+1, sum, temp, ans);    //exclude
        
        sum += candidates[i] ;
        temp.push_back(candidates[i]);
        helper(candidates, B, i, sum, temp, ans);    //include
        sum -= candidates[i] ;
        temp.pop_back();
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans ;
        vector<int> temp ;
        int sum = 0 ;
        
        helper(candidates, target, 0,sum, temp, ans );
        
        return ans ;
    }
};