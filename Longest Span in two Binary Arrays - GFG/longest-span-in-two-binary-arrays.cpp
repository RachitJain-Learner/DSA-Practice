// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
    int longSubarray_0Sum(int arr[], int n){
        int pSum = 0 , ans = 0 ;
        unordered_map<int, int> m ;
        
        for(int i=0 ; i<n ; ++i){
            
            pSum += arr[i] ;
            
            if(pSum == 0) ans = i+1 ;
            if(m.count(pSum))
                ans = max(ans , i - m[pSum]) ;
                
            m.insert({pSum,i}) ;
        }
        return ans ;
    }
public:
    int longestCommonSum(bool arr1[], bool arr2[], int n) {
        int arr[n];
        for(int i=0 ; i<n ; ++i)
            arr[i] = arr1[i] - arr2[i] ;   // to create an array containing -1, 1, 0
            
        return longSubarray_0Sum(arr, n);  //longest subarray with 0 sum
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        bool arr1[n], arr2[n];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        auto ans = ob.longestCommonSum(arr1, arr2, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends