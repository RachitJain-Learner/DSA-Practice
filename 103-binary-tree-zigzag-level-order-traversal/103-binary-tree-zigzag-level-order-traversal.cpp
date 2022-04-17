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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result ;
        
        if(root == NULL)
            return result ;
        
        queue<TreeNode*>q ;
        q.push(root) ;
        bool LeftToRight = true ;
        
        while(q.size()){
            
            int size = q.size() ;
            vector<int> ans(size) ;
            
            for(int i=0 ; i<size ; i++){
                TreeNode* front = q.front() ;
                q.pop() ;
                
                int index = LeftToRight ? i : size-i-1 ;
                ans[index] = front->val ;
                
                if(front->left)
                    q.push(front->left) ;
                if (front->right)
                    q.push(front->right) ;
            }
            LeftToRight = !LeftToRight ;
            result.push_back(ans) ;
        }
        return result ;
    }
};