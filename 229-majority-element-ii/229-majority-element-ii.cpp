class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> ans ;
        unordered_map<int, int> m ;
        
        for(int i=0 ; i<n ; i++)
            m[nums[i]]++ ;
        
        for(auto it: m){
            if(n/3 < it.second)
                ans.push_back(it.first) ;
        }
    return ans ;
    }
};