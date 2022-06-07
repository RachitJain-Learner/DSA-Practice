class Solution {
    
    vector<vector<int>> ansArr;
    
public:
    
    void combinationSumHelper(int k, int n, int sum, vector<int>& combination, int num){
        
        // if(sum > n) return ;
        if(k == 0){
            if(sum == n){
                ansArr.push_back(combination);
            }
            return;
        }
        
        if(num > 9) return;
        
        sum += num ; 
        combination.push_back(num);  // Including num in combination
        combinationSumHelper(k - 1, n, sum, combination, num + 1);
        combination.pop_back(); // Not including num in combination
        sum -= num ;
        
        combinationSumHelper(k, n, sum, combination, num + 1);    
        
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<int> combination;
        combinationSumHelper(k, n, 0, combination, 1);
        return ansArr;
         
    }
};