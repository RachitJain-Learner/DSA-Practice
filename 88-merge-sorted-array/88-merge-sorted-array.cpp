class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1 ;
        int j = n-1 ;
        int l = m + n - 1 ;
        
        while(l >= 0 && j >= 0){
            
            if(i == -1 || nums1[i] < nums2[j]){  //why i==-1 
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
