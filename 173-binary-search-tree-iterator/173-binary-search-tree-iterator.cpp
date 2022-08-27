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
class BSTIterator {
private:
    stack<TreeNode*> nodeStack ;
public:
    BSTIterator(TreeNode* root) {
        pushLeft(root) ;
    }
    
    int next() {
        TreeNode* temp = nodeStack.top() ;
        nodeStack.pop() ;
        pushLeft(temp->right) ;
        return temp->val ;
    }
    
    bool hasNext() {
        return !nodeStack.empty() ;
    }
private:
    void pushLeft(TreeNode* root){
        for( ;root ; nodeStack.push(root) ,root = root->left) ;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */