// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  private:
    void help(vector<int>& arr, int n, vector<vector<int>>& ans, int index){
        
        if(index == arr.size()){
            ans.push_back(arr) ;
            return ;
        }
        
        unordered_set<int> s ;
        
        for(int i = index; i<arr.size() ; i++){
            
            if(s.find(arr[i]) == s.end()){
                s.insert(arr[i]) ;
                
                swap(arr[i], arr[index]) ;
                help(arr, n , ans, index+1);
                swap(arr[i], arr[index]) ;
            }
        }
    }
  public:
    vector<vector<int>> uniquePerms(vector<int> arr ,int n) {
        
        vector<vector<int>> ans ;
        vector<int> tmp ;
        int index = 0 ;
        help(arr, n , ans, index);
        sort(ans.begin() , ans.end()) ;
        return ans ;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}  // } Driver Code Ends