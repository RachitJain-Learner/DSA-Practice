class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int pre_sum = 0 , res = 0 ;
        unordered_map<int ,int> l ;
        
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i] == 0)
                pre_sum += -1 ;
            pre_sum += nums[i] ;
            
            if(pre_sum == 0) res = i+1 ;
            
            if(l.find(pre_sum) == l.end())
                l.insert({pre_sum,i}) ;
            
            if(l.find(pre_sum) != l.end())
                res = max(res , i-l[pre_sum]) ;
        }
        return res ;
    }
};