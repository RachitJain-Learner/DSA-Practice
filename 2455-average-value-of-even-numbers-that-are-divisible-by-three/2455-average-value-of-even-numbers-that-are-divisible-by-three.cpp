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
        return (ct == 0) ? 0 : sum/ct ;  
    }
};