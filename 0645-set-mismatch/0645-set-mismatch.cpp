class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans ;
        unordered_set<int> st ;
        for(int i: nums){
            if(st.count(i)) {
                ans.push_back(i) ;
                break ;
            }
            st.insert(i) ;
        }
        int n = nums.size() ;
        int sum = n*(n+1)/2 ;
        int temp = 0 ;
        for(int i: nums) temp += i ;
        ans.push_back(sum - temp + ans[0]) ;
        return ans ;
    }
};