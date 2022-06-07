class Solution {
    
public:
    
    void combinationSumHelper(int k, int n, int sum, vector<int>& combination, int num, vector<vector<int>>& ansArr){
        
        if(k < 0) return ;
        if(sum == n){
            if(k == 0){
                ansArr.push_back(combination);
            }
            return;
        }
        
        if(num > 9) return;
        
        sum += num ; 
        combination.push_back(num);  // Including num in combination
        combinationSumHelper(k - 1, n, sum, combination, num + 1, ansArr);
        combination.pop_back(); // Not including num in combination
        sum -= num ;
        
        combinationSumHelper(k, n, sum, combination, num + 1, ansArr);    
        
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>> ansArr;
        vector<int> combination;
        combinationSumHelper(k, n, 0, combination, 1, ansArr);
        return ansArr;
         
    }
};