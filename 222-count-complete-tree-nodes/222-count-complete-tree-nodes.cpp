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
    int heightLeft(TreeNode* root){
        if(!root)
            return 0 ;
        
        return 1 + heightLeft(root->left) ; ;
    }
    int heightRight(TreeNode* root){
        if(!root)
            return 0 ;
        
        return 1 + heightRight(root->right) ;
    }
public:
    int countNodes(TreeNode* root) {
        if(root == NULL)
            return 0 ;
        
        int leftH = heightLeft(root->left) ; 
        int rightH = heightRight(root->right) ;
        
        if(leftH == rightH)
            return pow(2, leftH+1) - 1 ;
        
        return 1 + countNodes(root->left) + countNodes(root->right) ;
    }
};
