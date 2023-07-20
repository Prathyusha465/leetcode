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
    vector<int>v1;
    vector<int>helper(TreeNode*root,int val)
    {
        if(!root)
            return v1;
        if(val>v1.size())
            v1.push_back(root->val);
        helper(root->right,val+1);
        helper(root->left,val+1);
        return v1;
    }
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL)
            return v1;
        helper(root,1);
        return v1;
            
    }
};