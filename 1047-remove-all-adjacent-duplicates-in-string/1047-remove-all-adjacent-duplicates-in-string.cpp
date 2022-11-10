class Solution {
public:
    string removeDuplicates(string s) {
        stack<int> st ;
        for(char ch: s){
            if(st.size() > 0 && st.top() == ch)
                st.pop() ;
            else
                st.push(ch) ;
        }
        s = "" ;
        while(st.size()){
            s.push_back(st.top()) ;
            st.pop() ;
        }
        reverse(s.begin(), s.end()) ;
        return s ;
    }
};