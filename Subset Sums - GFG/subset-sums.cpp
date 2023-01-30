//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void solve(vector<int> &arr, int N, int ind, int sum, vector<int> &ans){
        if(ind == N){
            ans.push_back(sum) ;
            return ;
        }
        
        solve(arr, N, ind+1, sum + arr[ind], ans);  //take
        
        solve(arr, N, ind+1, sum, ans); // not take
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {   
        vector<int> ans;
        solve(arr, N, 0, 0, ans);
        
        return ans ;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends