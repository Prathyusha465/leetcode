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
    int ans=INT_MIN;
    void helper(TreeNode* root,int maxi,int mini){
        if(root==NULL)
            return;
        ans=max(ans,max(abs(maxi-root->val),abs(mini-root->val)));
        maxi=max(maxi,root->val);
        mini=min(root->val,mini);
        
        helper(root->left,maxi,mini);
        helper(root->right,maxi,mini);
       
    }
    int maxAncestorDiff(TreeNode* root) {
        if(root==NULL)
            return 0;
        helper(root,root->val,root->val);
        return ans;
    }
};