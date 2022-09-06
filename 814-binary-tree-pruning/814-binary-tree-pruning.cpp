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
class Solution {    //copy
public:
    TreeNode* pruneTree(TreeNode* root) {
        bool next_try = helper(root);
        if(root -> val == 0 && next_try == false) return nullptr;
        return root;
    }
    
    bool helper(TreeNode* root){
        if(root == nullptr) return false;
        
        bool next_try_left = helper(root->left);
        bool next_try_right = helper(root->right);
        
        if(next_try_left == false){                //left hand side need to be delete
            if(root->left != nullptr){
                delete root->left;
                root->left = nullptr;
            }
        }
        
        if(next_try_right == false){              //right hand side need to be delete
            if(root->right != nullptr){
                delete root->right;
                root->right = nullptr;
            }
        }
        
        if(next_try_left == false && next_try_right == false){
            if(root->val == 0) return false;
            return true;   
        }
        return true;    
    }
};