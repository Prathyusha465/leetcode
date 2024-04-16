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
   TreeNode* helper(TreeNode*root,int val,int depth,int level){
       
        if(root==NULL)
           return NULL;
      
        if(level+1==depth){
            TreeNode* newnl=new TreeNode(val);
            newnl->left=root->left;
            root->left=newnl;
            TreeNode* newnr=new TreeNode(val);
            newnr->right=root->right;
            root->right=newnr;
        }
     
        helper(root->left,val,depth,level+1);
        helper(root->right,val,depth,level+1);
        return root;
   }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
       if(root==NULL)
           return NULL;
        if(depth==1){
             TreeNode* newn=new TreeNode(val);
            newn->left=root;
            return newn;
            
        }
      return helper(root,val,depth,1);
    }
};