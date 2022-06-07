// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{   
    void solve(string &S , int pos , vector<string>& ans){
        
        unordered_set<char> s;
        
        if(pos == S.length()){
            ans.push_back(S) ;
            return ;
        }
        for(int i = pos; i<S.length() ; i++){
            if(s.count(S[i]))
                break ;
            
            s.insert(S[i]) ;
            
            swap(S[pos] , S[i]) ;
            solve(S, pos+1, ans) ;
            swap(S[pos] , S[i]) ;
        }
    }
	public:
		vector<string>find_permutation(string S)
		{
		    vector<string>ans ;
		    int i = 0 ;
		    solve(S , i , ans);
		    sort(ans.begin() , ans.end()) ;
		    
		    return ans ;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends