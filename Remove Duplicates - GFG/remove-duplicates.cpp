// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeDups(string S) 
	{
	    string output = "" ;
	    map<char , bool> dups ;
	    
	    //for(auto i : S){
	    for(int i=0 ; i< S.size() ; i++){
	        if(dups.count(S[i]) == 0){
	            dups[S[i]] = true ;
	            output.push_back(S[i]) ;
	        }
	    }
	    return output ;
	}
};

// { Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}  // } Driver Code Ends