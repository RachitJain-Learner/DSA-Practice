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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        vector<vector<int>> ans ;
        
        if(root == NULL)
            return ans ;
        
        map<int, map<int, multiset<int>>>nodes ;
        queue<pair<TreeNode*, pair<int, int>>> topNode ;
        
        topNode.push({root,{0,0}}) ;
        
        while(!topNode.empty()){
            pair<TreeNode*, pair<int, int>> temp = topNode.front() ;
            topNode.pop() ;
            
            TreeNode* front = temp.first ;
            int hd = temp.second.first ;
            int lvl = temp.second.second ;
            
            nodes[hd][lvl].insert(front->val) ;
            
            if(front->left)
                topNode.push({front->left, {hd-1, lvl+1}}) ;
            
            if(front->right)
                topNode.push({front->right, {hd+1, lvl+1}}) ;
        }
        
        for(auto i:nodes){
            vector<int> res ;
            
            for(auto j:i.second){
                for(auto k:j.second)
                    res.push_back(k) ;
            }
            ans.push_back(res) ;
        }
        return ans; 
    }
};