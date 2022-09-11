class Solution {
public:
    int partitionString(string s) {
        unordered_set<char> set ;
        int ans = 1 ;
        for(int i=0 ; i<s.length() ; ++i){
            if(set.find(s[i]) != set.end()) {      
                ans++ ;                // if duplicate char is found then increment the ans & clear the set
                set.clear();    
            }
            set.insert(s[i]) ;         // insert the char in the set
        }
        return ans ;
    }
};