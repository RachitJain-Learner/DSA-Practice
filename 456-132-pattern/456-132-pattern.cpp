class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        int n = nums.size() ;
        stack<int> st ;
        int right = INT_MIN ;
        
        for(int i = n-1 ; i >= 0 ; i--){
            if(right > nums[i]) 
                return true ;
            
            while(!st.empty() && st.top() < nums[i] ){
                right = st.top() ;
                st.pop() ;
            }
            st.push(nums[i]) ;
        }
        return false ;
    }
};