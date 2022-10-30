class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum = 0 , ct = 0;
        for(auto n: nums){
            if(n % 6 == 0){
                sum += n ;
                ct ++ ;
            }    
        }
        if(ct == 0) return 0 ;
        return sum/ct ;   
    }
};