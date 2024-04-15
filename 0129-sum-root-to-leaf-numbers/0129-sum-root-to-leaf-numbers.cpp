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
    int sum=0;
    int helper(TreeNode* root,int value){
        if(root==NULL)
            return 0;
         value=value*10+root->val;
       
         if(!root->left && !root->right)
            sum=sum+value;
        helper(root->left,value);
         helper(root->right,value);
        return sum;
    }
    int sumNumbers(TreeNode* root) {
        if(root==NULL)
            return 0;
        int val=0;
        int ans=helper(root,val);
        return ans;
    }
};