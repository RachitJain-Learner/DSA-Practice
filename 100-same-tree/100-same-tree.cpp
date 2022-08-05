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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(!p && !q)
            return true ;
        else if(!p || !q)
            return false ;
            
        bool left = isSameTree(p->left, q->left) ;
        if(left == false) return false ;
        
        bool right = isSameTree(p->right, q->right) ;
        if(right == false) return false ;
        
        return p->val == q->val ;
    }
};