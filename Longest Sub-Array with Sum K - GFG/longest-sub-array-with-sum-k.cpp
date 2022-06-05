// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        int preSum = 0;
        unordered_map<int , int> m ;
        int res = 0 ;
        
        for(int i=0 ; i<N ; i++){
            preSum += A[i] ;
            
            if(preSum == K) res = i+1 ;
            
            if(m.count(preSum - K))
                res = max(res , i - m[preSum - K]) ;
                
            m.insert({preSum , i}) ;
        }
        return res ;
    } 

};

// { Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends