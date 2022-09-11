class Solution {
public:
    int partitionString(string s) {
        unordered_set<char> t ;
        int ans = 1 ;
        
        for(int i=0 ; i<s.length() ; ++i){
            if(t.find(s[i]) != t.end()) {
                ans++ ;
                t.clear();
            }
            t.insert(s[i]) ;
        }
        return ans ;
    }
};



