//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
    long long mod = 1000000007 ;
    long long int solve(int n){
        vector<int> dp(n+1) ;
        dp[0] = 0, dp[1] = 1 ;
        
        for(int i=2 ; i<=n ; i++){
            dp[i] = (dp[i-1] + dp[i-2]) % mod ;
        }
        return dp[n] ;
    }
  public:
    long long int nthFibonacci(long long int n){
        return solve(n) ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends