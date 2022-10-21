//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
private:
    void dfs(int sr, int sc, vector<vector<int>>& image, vector<vector<int>>& copy, int start, int newColor, int drow[], int dcol[]){
        copy[sr][sc] = newColor ;
        int m = image.size() ;
        int n = image[0].size() ;
        for(int i= 0 ; i < 4 ; i++){
            int nrow = sr + drow[i] ;
            int ncol = sc + dcol[i] ;
            if(nrow >= 0 && nrow < m  && ncol >= 0 && ncol < n && image[nrow][ncol] == start && 
               copy[nrow][ncol] != newColor){
                dfs(nrow, ncol, image, copy, start, newColor, drow, dcol);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int start = image[sr][sc] ;
        vector<vector<int>>copy = image ;
        int drow[] = {-1, 0, +1, 0} ;
        int dcol[] = {0, +1, 0, -1} ;
        dfs(sr, sc, image, copy, start, newColor, drow, dcol);
        return copy ;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends