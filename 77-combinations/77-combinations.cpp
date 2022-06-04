#define pb push_back

class Solution {
    void helper(int n, int k, int i , vector<int>subSet, vector<vector<int>>& ans)
    {    
        if(k == 0){            // base case for larger subset
            ans.pb(subSet) ;
            return ;
        }
        if(k > n-i+1) return ;  // base case for all smaller subset
        
        helper(n , k , i+1 , subSet , ans) ;   //exclude 
        
        subSet.push_back(i) ;                  //include
        helper(n , k-1 , i+1 , subSet , ans) ;
    }
    
public:
    vector<vector<int>> combine(int n, int k) {
        
        vector<int>subSet ; 
        vector<vector<int>> ans ;
        
        helper(n , k , 1 , subSet , ans) ;
        
        return ans ;
    }
};
