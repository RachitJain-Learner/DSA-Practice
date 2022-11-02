class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        
        vector<char> v{'A','C','G','T'};
        int ans=0;
        set<string> visited;
        set<string> valid(bank.begin(),bank.end());
        queue<string> q;
        q.push(start);
        while(!q.empty()){
             
            int t=q.size();
            while(t--){
                start=q.front();
                q.pop();
                
                if(start==end) return ans;
                
                for(int i=0;i<start.size();i++){
                    for(char ch:v){ 
                            string ns=start;
                            ns[i]=ch;
                            if(!visited.count(ns) && valid.count(ns)){
                                visited.insert(ns);
                                q.push(ns);
                       } 
                    }
                }
                
            }
            ans++;            
        }   
        return -1;
        
    }
};