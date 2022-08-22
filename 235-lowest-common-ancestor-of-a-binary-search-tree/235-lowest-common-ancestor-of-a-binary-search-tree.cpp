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
                                            // no need to write case of root == NULL
        while(true){                        //since given that p and q exist in BST
            int curr = root->val ;
            
            if(curr > p->val && curr > q->val){
                root = root->left ;              // if(root->left) the traverse cond is not 
            }                           //required since given that both p and q exist in BST 
            
            else if(curr < p->val && curr < q->val){
                root = root->right ;                   // if(root->right) same reason
            }
            else
                break ;
        }
        return root ;
    }
};