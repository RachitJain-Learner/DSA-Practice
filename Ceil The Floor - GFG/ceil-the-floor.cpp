// { Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}
// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    pair<int, int> ans ;
    sort(arr , arr+n ) ;
    int floor = arr[0] , ceil = arr[0]  ;
    int i = 0, j= 0 ;
    if(arr[0] > x){
        ans.first = -1 ;
        ans.second = arr[0] ;
        return ans ;
    }
    else if(arr[n-1] < x){
        ans.first = arr[n-1] ;
        ans.second = -1 ;
        return ans ;
    }
    while(true){
    if(arr[i] == x){
        floor = arr[i] ;
        ceil = arr[i] ;
        break ;
    }
    else if(arr[i] < x){
        floor = max(floor , arr[i]) ;
        i++ ;
    }
    else{
        ceil = arr[i] ;
        break ;
    }
    }
    ans.first = floor ;
    ans.second = ceil ;
    return ans ;
}