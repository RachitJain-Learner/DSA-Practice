/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/
class Solution {
    
public:
void levelOrder(Node* root){
        queue<Node*> q;
        q.push(root);
        int n;
        Node* temp;
        while(!q.empty()){
            n=q.size();
            while(n--){
               temp = q.front();  q.pop();
                
               if(temp->left)q.push(temp->left);
               if(temp->right)q.push(temp->right);
                
               if(!q.empty())temp->next = q.front(); 
            }
            temp->next = nullptr;
        }
    }

    Node* connect(Node* root) {
        if(!root)return root;
        levelOrder(root);
        return root;
    }
};