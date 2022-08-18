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
    TreeNode* buildTreeHelper(vector<int>& in, int inS, int inE, vector<int>& pre,
    int preS, int preE, unordered_map<int, int> &inMap){
        
        if(inS > inE || preS > preE)
            return NULL ;
         
        TreeNode* root = new TreeNode(pre[preS]) ;   
        
        int inRoot = inMap[root->val] ;
        int numsLeft = inRoot - inS ;
        
        root->left = buildTreeHelper(in, inS, inRoot-1, pre, preS+1, preS+numsLeft, inMap) ;
        
        root->right = buildTreeHelper(in, inRoot+1, inE, pre, preS+numsLeft+1, preE, inMap) ;
        
        return root ;
    }
    
public:
    TreeNode* buildTree(vector<int>& pre, vector<int>& in){
        unordered_map<int, int> inMap ; 
        
        for(int i=0 ; i < in.size() ; i++)
            inMap[in[i]] = i ;
        
        TreeNode *root = buildTreeHelper(in, 0, in.size()-1, pre, 0, pre.size()-1, inMap);
        
        return root ;
    }
};