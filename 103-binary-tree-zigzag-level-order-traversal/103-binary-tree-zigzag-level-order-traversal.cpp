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
        vector<vector<int>> ans ;
        
        if(root == NULL)
            return ans ;
        
        queue<TreeNode*> nodes ;
        bool flag = true ;
        nodes.push(root) ;
        
        while(nodes.size()){             // !nodes.empty()
            int size = nodes.size() ;
            vector<int> row(size);
            
            for(int i=0 ; i<size ; ++i){
                TreeNode* temp = nodes.front() ;
                nodes.pop() ;
            
                int index = flag ? i :(size-i-1) ;
                row[index] = temp->val ;// accessing in such a way requires 
                                         // to define vector "store" with size
                if(temp->left)
                    nodes.push(temp->left) ;
                if(temp->right)
                    nodes.push(temp->right) ; 
            }
            flag = !flag ;
            ans.push_back(row) ;
        }
        return ans ;
    }
};