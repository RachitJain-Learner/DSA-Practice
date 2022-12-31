//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    int solve(int *coins, int M, int V){
        vector<int> dp(V+1, INT_MAX) ;
        dp[0] = 0 ;
        
        for(int j=1 ; j<= V ; ++j){
            for(int i=0 ; i<M ; ++i){
                if(j-coins[i] >= 0 && dp[j-coins[i]] != INT_MAX)
                    dp[j] = min(dp[j], 1 + dp[j-coins[i]]) ;
            }
        }
        return dp[V] ;
    }
	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    int minAns = solve(coins, M, V) ;
	    return minAns == INT_MAX ? -1 : minAns ;
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends