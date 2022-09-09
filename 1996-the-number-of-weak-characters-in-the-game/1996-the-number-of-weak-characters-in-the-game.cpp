class Solution {
public:
    int ans = 0;
    
    static bool sor(vector <int> &a, vector <int> &b){        
        if(a[0] == b[0])
            return a[1] > b[1];
        return a[0] < b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& v) {
        int n = v.size();
        
        // Sort ascending for v[0][j], and descending for v[j][1]
        sort(v.begin(), v.end(), sor);
        int mini = v[n-1][1];
        // Traversing descending and storing the max defense value.
        for(int i = n-2; i >= 0; --i){
            if(v[i][1] < mini)
                ++ans;         
            mini = max(v[i][1], mini);
        }
        return ans;
    }
};