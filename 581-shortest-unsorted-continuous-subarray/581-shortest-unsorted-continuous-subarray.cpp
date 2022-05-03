class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size() ;
        int st = 0 , end = n-1;
        
        while(st+1 <= n-1 && nums[st] <= nums[st+1])
            st++ ;
        while(end-1 >= 0 && nums[end] >= nums[end-1])
            end-- ;
        
        if(st == n-1)
            return 0;
        
        int SMax = INT_MIN, SMin = INT_MAX ;
        
        for(int i = st ; i<=end ; i++){
            SMax = max(SMax , nums[i]) ;
            SMin = min(SMin , nums[i]) ;
        }
         cout<<st<<" "<<SMin ;
        while(st-1 >= 0 && SMin < nums[st-1]) st-- ;
        cout<<st<<" " ;
        while(end+1 <= n-1 && (SMax > nums[end+1])) end++ ;
                cout<<end<<" " ;
        return end - st + 1 ;
    }
};