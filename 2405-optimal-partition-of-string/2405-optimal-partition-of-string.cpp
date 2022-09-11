class Solution {
public:

    int partitionString(string s) {
        unordered_set<char> t ;
        int ct = 1 ;
        for(int i=0 ; i<s.length() ; ++i){
            
            if(t.find(s[i]) == t.end())
                t.insert(s[i]);
            
            else{
                ct++ ;
                t.clear();
                t.insert(s[i]) ;
            }
        }
        return ct ;
    }
};



