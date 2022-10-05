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
    int sum = 0 ;
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL) return false;
        sum += root->val ;
        
        if (sum == targetSum && root->left ==  NULL && root->right == NULL) return true;
        
        bool lh = hasPathSum(root->left, targetSum) ;
        if(lh) return true ;
        
        bool rh = hasPathSum(root->right, targetSum);
        if(rh) return true ;
        
        sum -= root->val ;
        
        return lh || rh ;
    }
};