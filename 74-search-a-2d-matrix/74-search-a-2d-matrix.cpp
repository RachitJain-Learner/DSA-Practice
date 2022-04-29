class Solution {
public:
    bool binarySearch(vector<vector<int>>& mat , int mid , int key){
        int s = 0 , e = mat[0].size() - 1 ;
        
        while(s<=e){
            int m = s + (e-s)/2 ;
            if(key == mat[mid][m])
                return true ;
            if(key < mat[mid][m] )
                e = m-1 ;
            else
                s = m+1 ;
        }
        return false ; 
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int f = 0 , l = matrix.size()-1 ;
        int col = matrix[0].size() ;
        while(f<=l){
            int mid = f+(l-f)/2 ;
            
            if(target == matrix[mid][0] || target == matrix[mid][col-1])
                return true ;
            
            if(target > matrix[mid][0] && target < matrix[mid][col-1])
                return binarySearch(matrix , mid , target) ;
            
            if(target > matrix[mid][0])
                f = mid + 1 ;
            else 
                l = mid - 1 ;
        }
        return false ;
    }
};