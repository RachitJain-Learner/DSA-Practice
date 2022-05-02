class Solution {
public:
    bool backspaceCompare(string s, string T) {
        
        int n1 = s.size(), n2 = T.size() ;
        stack <char> s1, s2 ;
        
        for(int i=0 ; i<n1 ; i++){
            
            if(s[i] == '#' && s1.size())
                s1.pop() ;
            
            else if(s[i] != '#')
                s1.push(s[i]);
        }
        
        for(int i=0 ; i<n2 ; i++){
            
            if(T[i] == '#' && s2.size())
                s2.pop() ;
            
            else if(T[i] != '#')
                s2.push(T[i]);
        }
        
        if(s1.size() != s2.size())
            return false ;
        else{
            while(s1.size()){

                if(s1.top() == s2.top()){
                    s1.pop() ;
                    s2.pop() ;
                }
                else 
                    return false ;
            }
            return true ;
        }
    }
};