//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector <int> ans ;
        deque<int> temp ;
        
        for(int i=0 ; i<n ; i++){
        if(!temp.empty() && temp.front() == i-k) temp.pop_front() ;
        
        while(!temp.empty() && arr[temp.back()] < arr[i]) temp.pop_back() ;
        
        temp.push_back(i) ;
        
        if(i >= k-1) ans.push_back(arr[temp.front()]) ;
        }
        return ans ;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends