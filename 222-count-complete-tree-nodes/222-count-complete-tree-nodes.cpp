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
        if(!root) return 0 ;
        
        return 1 + heightLeft(root->left) ; ;
    }
    int heightRight(TreeNode* root){
        
        if(!root) return 0 ;
        
        return 1 + heightRight(root->right) ;
    }
public:
    int countNodes(TreeNode* root) {
        if(!root) return 0 ;    //this time no use
        
        int leftH = heightLeft(root) ; 
        int rightH = heightRight(root) ;
        
        if(leftH == rightH)
            return (1<<leftH) - 1 ;
        
        return 1 + countNodes(root->left) + countNodes(root->right) ;
    }
};
