class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size() ;
        if(n == 1) return nums[0] ;
        
        vector<int> temp1, temp2 ;
        
        for(int i=0 ; i<n ; i++){
            if(i != 0) temp1.push_back(nums[i]) ;
            if(i != n-1) temp2.push_back(nums[i]) ;
        }
        
        int amount1 = robbery(temp1);
        int amount2 = robbery(temp2);
        
        return max(amount1, amount2) ;
    }
    
    int robbery(vector<int> &temp){
        
        int prev = temp[0] ;
        int prev2 = 0 ;
        
        for(int i = 1; i<temp.size() ; i++){
            
            int pick = temp[i] ; if(i>1) pick += prev2 ; 
            int notpick = prev ; 

            int curi = max(pick, notpick) ;
            
            prev2 = prev ;
            prev = curi ;
        }
        return prev ;
    }
};