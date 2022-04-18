// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    long long int maxi = INT_MIN , mini = INT_MAX ;
    
    pair<long long, long long> ans ;
    
    for(int i=0 ; i< n ; i++){
        maxi = max(maxi, a[i]) ; 
        mini = min(mini, a[i]) ; 
    }
    ans.first = mini ;
    ans.second = maxi ;
    
    return ans ;
}