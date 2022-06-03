// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    int subArraySum(int arr[], int n, int sum)
    {
    	int pre_sum = 0 , ans = 0 ;
    	unordered_map<int , int> s ; 
    	
    	for(int i=0 ; i<n ; i++){
    	    pre_sum += arr[i] ;
    	    
    	    if(pre_sum == sum)
    	        ans++ ;
    	    
    	    if(s.count(pre_sum - sum))      //
    	        ans += s[pre_sum - sum] ;
    	    
    	    s[pre_sum]++ ;
    	}
    	return ans ;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution ob;
	    cout<<ob.subArraySum(arr, n, sum);
	    cout<<'\n';
	}
	return 0;
}  // } Driver Code Ends