class Solution {
public:
    bool isVowel(char c) {
        // alternatively, we can just check 
        // return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || 
        //        c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    
    string reverseVowels(string s) {
        int n = s.size(), l = 0, r = n - 1;
        while (l < r) {
            while (l < r && !isVowel(s[l])) l++;
            while (r > l && !isVowel(s[r])) r--;
            
            swap(s[l++], s[r--]);
            
        }
        return s;
    }
};