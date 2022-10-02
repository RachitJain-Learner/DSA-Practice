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
public:
    int solveHeight(TreeNode *root ){
        if(root == NULL)
            return 0 ;
        
        int hLeft = solveHeight(root->left) ;
        if(hLeft == -1) return -1 ;
        
        int hRight = solveHeight(root->right) ;
        if(hRight == -1) return -1 ;
        
        if(abs(hRight - hLeft) > 1) return -1 ;
        
        return 1 + max(hRight , hLeft) ;
    }
    
    bool isBalanced(TreeNode* root) {
       
        return (solveHeight(root) != -1) ;
    }
};