#define pb push_back

class Solution {
    void helper(int n, int k, int i , vector<int>subSet, vector<vector<int>>& ans)
    {    
        if(k == 0){            //base case 
            ans.pb(subSet) ;
            return ;
        }
        for(int x= i; x<=n ; ++x){
            subSet.push_back(x) ;                    // include
            helper(n , k-1 , x+1 , subSet , ans) ;
            subSet.pop_back() ;                      // backtrack
        }
    }
    
public:
    vector<vector<int>> combine(int n, int k) {
        
        vector<int>subSet ; 
        vector<vector<int>> ans ;
        
        helper(n , k , 1 , subSet , ans) ;
        
        return ans ;
    }
};
