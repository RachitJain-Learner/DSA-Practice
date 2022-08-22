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
private:
    TreeNode* deleteHelper(TreeNode* root){
        if(root->left == NULL)
            return root->right ;
        
        else if(root->right == NULL)
            return root->left ;
        
        else{
            TreeNode* rightTree = root->right ;
            TreeNode* node = root->left ;
            while(node->right != NULL)
                node = node->right ;
            
            node->right = rightTree ;
        }
        return root->left ;
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL)
            return NULL ;
        if(root->val == key)
            return deleteHelper(root) ;
        
        TreeNode* temp = root ;
        
        while(root){
            if(root->val > key){
                if(root->left && root->left->val == key){
                    root->left = deleteHelper(root->left) ;
                    break ;
                }
                else
                    root = root->left ;
            }
            else{
                if(root->right && root->right->val == key){
                    root->right = deleteHelper(root->right) ;
                    break ;
                }
                else
                    root = root->right ;
            }   
        }
        return temp ;
    }
};