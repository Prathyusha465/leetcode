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
    Node* connect(Node* root) {
        if(root==NULL)
            return root;
        queue<Node*>q1;
         q1.push(root);
        while(!q1.empty()){
            int n=q1.size();
            Node* temp=NULL;
            for(int i=0;i<n;i++){
                auto it=q1.front();
                q1.pop();
                it->next=temp;
                temp=it;
                if(it->right)
                    q1.push(it->right);
                if(it->left)
                    q1.push(it->left);
            }
        }
        return root;
    }
};