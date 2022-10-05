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
    bool helper(TreeNode* root, int sum, int targetSum){
        if (root == NULL) return false ;
        
        sum += root->val ;
        if (sum == targetSum && root->left ==  NULL && root->right == NULL) return true;
        
        return helper(root->left, sum, targetSum) || helper(root->right, sum, targetSum) ;

    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return helper(root, 0, targetSum) ;
    }
};