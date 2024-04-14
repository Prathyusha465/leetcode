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
   int helper(TreeNode* root,bool flag){
       if(root==NULL)
           return 0;
       if(!root->left && !root->right && flag){
           sum=sum+root->val;
       }
       helper(root->left,true);
       helper(root->right,false);
       return sum;
   }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL)
            return 0;
        bool flag=false;
        helper(root,flag);
       
        return sum;
        
    }
};