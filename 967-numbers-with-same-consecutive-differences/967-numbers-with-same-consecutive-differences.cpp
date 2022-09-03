class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        queue<int> q ;
        
        for(int i=1; i<=9 ; ++i)
            q.push(i) ;
        
        int lvl = 1 ;
        
        while(!q.empty()){
            int qs = q.size() ;
            lvl++ ;
            while(qs--){
                int num = q.front();
                q.pop() ;
                int l = num % 10 ;

                if(l+k <= 9)
                    q.push(num*10+l+k) ;
                if(l-k >= 0 && k>0)
                    q.push(num*10+l-k) ;
            }
            if(lvl == n)
                break ;
        }
        vector<int> ans ;
        while(!q.empty()){
            int n = q.front() ;
            q.pop() ;
            ans.push_back(n) ;
        }
        return ans ;
    }
};
