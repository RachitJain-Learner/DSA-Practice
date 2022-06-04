// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    void helper(vector<int> &A, int B, int i, int sum, vector<int> temp, vector<vector<int>>& ans){
        int n = A.size() ;
        
        if(sum == B){
            ans.push_back(temp) ;
            return ;
        }
        if(sum > B || i == n)
            return ;
            
        while(A[i] == A[i+1] && i+1 < n) ++i ;
        
        helper(A, B, i+1, sum, temp, ans);    //exclude
        
        temp.push_back(A[i]);
        sum += A[i] ;
        helper(A, B, i, sum, temp, ans);    //include
    }
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        
        vector<vector<int>> ans ;
        vector<int> temp ;
        int sum = 0 ;
        
        sort(A.begin() , A.end()) ;
        helper(A, B, 0, sum, temp, ans );
        sort(ans.begin() , ans.end()) ;
        
        return ans ;
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	  // } Driver Code Ends