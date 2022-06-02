class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int> common(nums1.begin() , nums1.end());
        vector<int> ans ;
        
        for(int j=0 ; j<nums2.size() ; j++){
            if(common.count(nums2[j])){
                ans.push_back(nums2[j]) ;
                common.erase(nums2[j]) ;
            }
        }
        return ans ;
    }
};