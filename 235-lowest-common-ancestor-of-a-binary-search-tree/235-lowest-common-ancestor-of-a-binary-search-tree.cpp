/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL)
            return NULL ;
        
        while(true){
            int curr = root->val ;
            
            if(curr > p->val && curr > q->val){
                if(root->left)
                    root = root->left ;
            }
            else if(curr < p->val && curr < q->val){
                if(root->right)
                    root = root->right ;
            }
            else
                break ;
        }
        return root ;
    }
};