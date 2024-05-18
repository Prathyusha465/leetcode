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
    int ans=0;
    int helper(TreeNode* root){
        
        if(root==NULL)
            return 0;
       int l=helper(root->left);
       int r=helper(root->right);
        ans=ans+abs(l)+abs(r);
        return (root->val-1)+l+r;
        
    }
    int distributeCoins(TreeNode* root) {
        if(root==NULL)
            return 0;
        helper(root);
         return ans;
    }
};