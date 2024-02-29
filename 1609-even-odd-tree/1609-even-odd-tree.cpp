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
    bool isEvenOddTree(TreeNode* root) {
        if(root==NULL)
            return true;
       queue<TreeNode*>q1;
        bool flag=true;
        q1.push(root);
    
        while(!q1.empty()){
            int x=q1.size();
            int prev=flag?INT_MIN:INT_MAX;
            for(int i=0;i<x;i++){
               TreeNode* temp=q1.front();
                q1.pop();
                int val=temp->val;
                if(flag && (val%2==0 || val<=prev))
                    return false;
                if(!flag && (val%2==1 || val>=prev))
                    return false;
                if(temp->left)
                    q1.push(temp->left);
                if(temp->right)
                    q1.push(temp->right);
                prev=temp->val;
            }
            flag=!flag;
        }
        return true;
    }
};