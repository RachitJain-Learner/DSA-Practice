#define pb push_back

class Solution {
    void helper(int n, int k, int i , vector<int>subSet, vector<vector<int>>& ans){
        
        if(k == 0){            //base case 
            ans.pb(subSet) ;
            return ;
        }
        if(k > n-i+1) return ;
        if(i>n) return ;
        
        helper(n , k , i+1 , subSet , ans) ;   //exclude 
        
        subSet.push_back(i) ;                  //include
        helper(n , k-1 , i+1 , subSet , ans) ;
    }
public:
    vector<vector<int>> combine(int n, int k) {
        
        vector<int>subSet ; 
        vector<vector<int>> ans ;
        int i = 1 ;
        helper(n , k , i , subSet , ans) ;
        
        return ans ;
    }
};