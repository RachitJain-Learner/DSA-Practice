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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0 ;
        int ans = 0 ;
        queue<pair<TreeNode*, int>> nodes ;
        nodes.push({root, 0}) ;
        
        while(!nodes.empty()){
            int size = nodes.size() ;
            int id = nodes.front().second ; 
            int first, last ;
            
            for(int i=0 ; i<size ; ++i){
                long long int cur_id = nodes.front().second - id ;
                TreeNode *tmp = nodes.front().first ;
                nodes.pop() ;
                if(i == 0) first = cur_id ; 
                if(i == size-1) last = cur_id ;
                
                if(tmp->left) nodes.push({tmp->left, 2*cur_id+1}) ;
                if(tmp->right) nodes.push({tmp->right, 2*cur_id+2}) ;
            }
            ans = max(ans, last-first+1) ;
        }
        return ans ;
    }
};