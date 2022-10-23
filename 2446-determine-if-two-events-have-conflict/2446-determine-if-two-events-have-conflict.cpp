class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        if(max(event1[0], event2[0]) <= min(event1[1], event2[1])) return true ;
        return false ;
    }
};


// Method - 1
// class Solution {
// public:
//     bool haveConflict(vector<string>& event1, vector<string>& event2) {
//         if(event1[0] <= event2[1] && event2[0] <= event1[1]) return true ;
//         return false ;
//     }
// };