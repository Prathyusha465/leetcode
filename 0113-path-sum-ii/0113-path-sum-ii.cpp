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
    void helper(TreeNode*root,int targetSum, vector<int>temp,vector<vector<int>>&ans,int value) {
      if(root==NULL)
          return;
     
        if(!root->left && !root->right){
            if(root->val+value ==targetSum){
                temp.push_back(root->val);
                ans.push_back(temp);
            }
        }
        temp.push_back(root->val);
        helper(root->left,targetSum,temp,ans,value+root->val);
        helper(root->right,targetSum,temp,ans,value+root->val);

       
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>temp;
        vector<vector<int>>ans;
        
        if(root==NULL)
            return ans;
        
        helper(root,targetSum,temp,ans,0);
        return ans;
    }
};