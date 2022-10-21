class Solution {
private:
    void dfs(int sr, int sc, vector<vector<int>>& image, vector<vector<int>>& copy, int start, int color, int drow[], int dcol[]){
        copy[sr][sc] = color ;
        int m = image.size() ;
        int n = image[0].size() ;
        for(int i= 0 ; i < 4 ; ++i){
            int nrow = sr + drow[i] ;
            int ncol = sc + dcol[i] ;
            if(nrow >= 0 && nrow < m  && ncol >= 0 && ncol < n && image[nrow][ncol] == start && 
               copy[nrow][ncol] != color){
                dfs(nrow, ncol, image, copy, start, color, drow, dcol);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int start = image[sr][sc] ;
        vector<vector<int>>copy = image ;
        int drow[] = {-1, 0, +1, 0} ;
        int dcol[] = {0, -1, 0, +1} ;
        dfs(sr, sc, image, copy, start, color, drow, dcol);
        return copy ;
    }
};