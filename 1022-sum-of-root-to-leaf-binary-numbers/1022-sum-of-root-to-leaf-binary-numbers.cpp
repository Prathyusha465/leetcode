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
    void helper(TreeNode* root, int &val){
        if(root==NULL)
            return;
        val=val*2+root->val;
        cout<<"val "<<val<<endl;
        if(!root->left && !root->right){
            sum=sum+val;
        }
        helper(root->left,val);
        helper(root->right,val);
        val=val/2;
    }
    int sumRootToLeaf(TreeNode* root) {
        int val=0;
        helper(root,val);
        return sum;
    }
};