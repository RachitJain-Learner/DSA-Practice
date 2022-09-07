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
    void solve(TreeNode* root,string &s)
    {
        if(!root) return;
        s = s + "(" + to_string(root->val);
        solve(root->left,s);
        if(!root->left && root->right)
        {
            s = s + "()";
        }
        solve(root->right,s);
        s = s + ")";
    }
    string tree2str(TreeNode* root) {
        string s="";
        string ans="";
        
        solve(root,s);
        for(int i=1;i<s.size()-1;i++)
        {
            ans.push_back(s[i]);
        }
        return ans;
    }
};
