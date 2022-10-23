class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int n = nums.size() ;
        int ct = 0 ;
        for(int i=0 ; i<n ; ++i){
            int currGCD = 0 ;
            
            for(int j = i ; j < n ; j++){
                currGCD = gcd(currGCD, nums[j]) ;
                
                if(currGCD == k) ct++ ;
            }
        }
        return ct ;
    }
};