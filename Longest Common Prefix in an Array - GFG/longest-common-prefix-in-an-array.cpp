//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string compareTwo(string a, string b){
        string common ;
        int i = 0 ;
        while(i < a.size() && i < b.size()){
            if(a[i] == b[i]) common += a[i] ;
            else break ;
            i++ ;
        }
        return common ;
    }
    string longestCommonPrefix (string arr[], int n)
    {
        string pre = arr[0] ;
        for(int i=1 ; i<n ; i++){
            pre = compareTwo(pre, arr[i]) ;
        }
        return (pre == "")? "-1": pre ;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends