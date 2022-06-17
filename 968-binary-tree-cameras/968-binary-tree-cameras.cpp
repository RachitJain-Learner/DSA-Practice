/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int numOfCameras = 0;
    
    // -1: NOT MONITORED
    //  0: MONITORED
    //  1: HAS CAMERA
    
    int dfs(TreeNode* root) {
        if (root == NULL) return 0;
        
        int left = dfs(root->left);
        int right = dfs(root->right);
        
        if (left == -1 || right == -1) {     
            numOfCameras++;
            return 1; 
        }
        
        if (left == 1 || right == 1)
            return 0; 
        
        return -1;
    }
public:
    int minCameraCover(TreeNode* root) {
        return dfs(root) == -1 ? numOfCameras + 1 : numOfCameras;
    }
};