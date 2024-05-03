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
    TreeNode* helper(vector<int>& preorder, vector<int> inorder,int &ind,int start,int end){
        if(start>end)
            return NULL;
        int temp=0;
        while(preorder[ind]!=inorder[temp]){
            temp++;
        }
         ind++;
        TreeNode* newr=new TreeNode(inorder[temp]);
       
        newr->left=helper(preorder,inorder,ind,start,temp-1);
        newr->right=helper(preorder,inorder,ind,temp+1,end);
        return newr;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=inorder.size();
        int ind=0;
       return helper(preorder,inorder,ind,0,n-1);
     
    }
};