// Method - 3 using Two pointers

// class Solution {
// public:
//     string removeDuplicates(string s) {
//             int i = 0, n = s.length();
//             for (int j = 0; j < n; ++j, ++i) {
//                 s[i] = s[j];
//                 if (i > 0 && s[i - 1] == s[i]) // count = 2
//                     i -= 2;
//             }
//             return s.substr(0, i);
//         }
// };

// Method - 2 using Two pointers
class Solution {
public:
    string removeDuplicates(string s) {
        string temp =  "" ;
        for(char &ch: s){
            if(temp.size() && temp.back() == ch)
                temp.pop_back() ;
            else
                temp.push_back(ch) ;
        }
        return temp ;
    }
};


// Method - 1 using Stack

// class Solution {
// public:
//     string removeDuplicates(string s) {
//         stack<int> st ;
//         for(char ch: s){
//             if(st.size() > 0 && st.top() == ch)
//                 st.pop() ;
//             else
//                 st.push(ch) ;
//         }
//         s = "" ;
//         while(st.size()){
//             s.push_back(st.top()) ;
//             st.pop() ;
//         }
//         reverse(s.begin(), s.end()) ;
//         return s ;
//     }
// };