class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1 ;
        int j = n-1 ;
        int l = m + n - 1 ;
        
        while(l >= 0 && j >= 0){
            
            if(i == -1 || nums1[i] < nums2[j]){
                nums1[l] = nums2[j]; 
                j-- ;
            }
            else{
                nums1[l] = nums1[i];
                 i-- ;
            } 
            l-- ;
        }
    }
};


// ublic void merge(int[] A, int m, int[] B, int n) {
// 	for (int l = m+n-1, a = m-1, b = n-1; l>=0 && b>=0; l--) {
// 		if (a >= 0 && A[a] > B[b]) A[l] = A[a--]; 
// 		else A[l] = B[b--];
// 	}        
// }