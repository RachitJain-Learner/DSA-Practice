class Solution {
private:
    void dfs(int r, int c, vector<vector<int>>& image, vector<vector<int>>& ans, int startColor, int newColor, int drow[], int dcol[]){
        ans[r][c] = newColor ;

        for(int i= 0 ; i < 4 ; ++i){
            int nrow = r + drow[i] ;
            int ncol = c + dcol[i] ;
            if(nrow >= 0 && nrow < image.size()  && ncol >= 0 && ncol < image[0].size() && 
               image[nrow][ncol] == startColor && ans[nrow][ncol] != newColor){  
                                                                    // Another solution in notes --->
                dfs(nrow, ncol, image, ans, startColor, newColor, drow, dcol);
            }
        }
    }                                                          
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int startColor = image[sr][sc] ;
        vector<vector<int>>ans = image ;
        int drow[] = {-1, 0, +1, 0} ;
        int dcol[] = {0, -1, 0, +1} ;
        dfs(sr, sc, image, ans, startColor, color, drow, dcol);
        return ans ;
    }
};