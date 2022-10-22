class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s ;
        for(int i: nums){
            if(s.count(i)) return true ;
            s.insert(i) ;
        }
        return false ;
    }
};

// method -2
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_set<int> s(nums.begin(), nums.end()) ;
//         if(s.size() == nums.size()) return false ;
//         return true ;
//     }
// };

// method -1 
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_map<int, int> mp ;
//         for(int i: nums){
//             mp[i]++ ;
//             if(mp[i] == 2) return true ;
//         }
//         return false ;
//     }
// };