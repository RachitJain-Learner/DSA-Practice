class Solution {
public:

    int partitionString(string s) {
        set<char> t ;
        int ct = 1 ;
        for(int i=0 ; i<s.length() ; ++i){
            
            if(t.find(s[i]) == t.end()){
                
               t.insert(s[i]);
            }
            else{
                t.clear();
                t.insert(s[i]) ;
                ct++ ;
                
            }
        }
        
        return ct ;
    }
};



