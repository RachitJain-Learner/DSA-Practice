//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends

string firstRepChar(string s)
{
    unordered_set<int> st ;
    
    for(int i=0 ; i<s.size() ; i++){
        if(st.find(s[i]) != st.end())
            return {s[i]} ;
        st.insert(s[i]) ;
    }
    return "-1" ;
}