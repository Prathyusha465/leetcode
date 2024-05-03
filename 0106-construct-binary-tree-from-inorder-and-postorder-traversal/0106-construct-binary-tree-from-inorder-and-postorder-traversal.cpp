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
    TreeNode* helper(vector<int> &inorder, vector<int> postorder,int &ind,int start,int end){
        if(start>end)
            return NULL;
        int temp=0;
        while(inorder[temp]!=postorder[ind])
        {
            temp++;
        }
        ind--;
        TreeNode* newr=new TreeNode(inorder[temp]);
       //newr->left=helper(inorder,postorder,ind,start,temp-1);
        newr->right=helper(inorder,postorder,ind,temp+1,end);
        newr->left=helper(inorder,postorder,ind,start,temp-1);

        return newr;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        int ind=n-1;
        return helper(inorder,postorder,ind,0,n-1);
    }
};
/*
TreeNode*helper(vector<int>&inorder,vector<int>&postorder,int &index,int left,int right)
  {
    if(left>right)
        return NULL;
    int pivot=0;
    while(postorder[index]!=inorder[pivot]) 
        pivot++;
    index--;
  TreeNode*nnode=new TreeNode(inorder[pivot]);
   nnode->right=helper(inorder,postorder,index,pivot+1,right);

nnode->left=helper(inorder,postorder,index,left,pivot-1);
    return nnode;
}*/