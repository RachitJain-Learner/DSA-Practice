/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        if(!root)return ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>tmp;
            while(size--){
                Node* t=q.front();
                q.pop();
                tmp.push_back(t->val);
                for(auto it:t->children){
                    if(it)q.push(it);
                }
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};