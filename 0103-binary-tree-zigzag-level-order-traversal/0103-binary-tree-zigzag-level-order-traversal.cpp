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
        vector<vector<int>>ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*>q1;
        bool flag=true;
        q1.push(root);
        while(!q1.empty())
        {
            int n=q1.size();
            vector<int>v1(n);
            for(int i=0;i<n;i++)
            {
                TreeNode* temp=q1.front();
                q1.pop();
                if(flag)
                 v1[i]=temp->val;
                else
                v1[n-i-1]=temp->val;
                if(temp->left)
                    q1.push(temp->left);
                if(temp->right)
                    q1.push(temp->right);  
            }
            ans.push_back(v1);
            v1.resize(0);
            flag=!flag;
        }
        return ans;
    }
};