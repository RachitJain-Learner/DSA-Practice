class Solution {
public:
    int reverse(int x){
        int num = 0 ;
        while(x){
            num = num*10 + x%10  ;
            x/=10 ;
        }
        return num ;
    }
    int countDistinctIntegers(vector<int>& a) {
        set<int> s(a.begin(), a.end()) ;      // inserting all array elements in set 
        for(int i: a)  s.insert(reverse(i)) ;    //  inserting reversed elements in set
        return s.size() ;
    }
};