class Solution {
public:
    int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<int> LA, LB;
        int N = A.size();
        unordered_map<int, int> count;
        
        for (int i = 0; i < N * N; ++i){
            if (A[i / N][i % N] == 1)
                LA.push_back(i / N * 100 + i % N);
            
            if (B[i / N][i % N] == 1)
                LB.push_back(i / N * 100 + i % N);
        }
        int res = 0;
        for (int i : LA) {
            for (int j : LB) {
                count[i - j]++;
                res = max(res, count[i - j]);
            }
        }
        return res ;   
    }
};