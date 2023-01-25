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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q1;
        vector<vector<int>>v1;
        if(root==NULL)
            return v1;
        q1.push(root);
        while(!q1.empty())
        {
            int n=q1.size();
            vector<int>v2(n);
            for(int i=0;i<n;i++)
            {
                TreeNode* temp=q1.front();
                q1.pop();
                v2[i]=temp->val;
                if(temp->left)
                    q1.push(temp->left);
                if(temp->right)
                    q1.push(temp->right);
            }
            v1.push_back(v2);
            v2.resize(0);
        }
        return v1;
    }
};