// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    private:
        int Pivot(int A[], int l, int h){
            
            while(l<h){
                int m = l + (h-l)/2 ;
                
                if(A[0] <= A[m])
                    l = m + 1 ;
                else
                    h = m ;
            }
            return h;
        }
        int binarySearch(int nums[] , int s , int e , int key){
        
        while(s<=e){
            int m = s + (e-s)/2 ;
            
            if(key == nums[m])
                return m ;
            
            if(key < nums[m])
                e = m-1 ;
            else
                s = m+1 ;
        }
        return -1 ;
    }
    public:
    int search(int A[], int l, int h, int key){
        
        int m = l + (h-l)/2 ;
        
        int piv = Pivot(A, l, h);
        
        if(A[piv] <= key && key <= A[h])
            return binarySearch(A, piv, h , key);
        else
            return binarySearch(A, 0, piv-1, key);
    }
    //return -1 ;
};

// { Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}  // } Driver Code Ends