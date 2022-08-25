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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0 ;
        return treeBuild(i, preorder, INT_MAX);
    }
    TreeNode* treeBuild(int &i, vector<int>& preorder, int bound){
        
        if(i == preorder.size() || preorder[i] > bound) 
            return NULL ;
        
        TreeNode* root = new TreeNode(preorder[i++]) ;
        
        root->left = treeBuild(i, preorder, root->val);
        root->right = treeBuild(i, preorder, bound);
        
        return root ;
    }
};