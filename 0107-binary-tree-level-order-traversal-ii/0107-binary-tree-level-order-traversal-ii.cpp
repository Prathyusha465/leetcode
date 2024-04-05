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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
       vector<vector<int>>ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*>q1;

        q1.push(root);
        while(!q1.empty()){
            int n=q1.size();
            vector<int>v(n);
            for(int i=0;i<n;i++){
                auto it=q1.front();
                q1.pop();
                v[i]=it->val;
                if(it->left)
                    q1.push(it->left);
                if(it->right)
                    q1.push(it->right);
            }
            ans.push_back(v);
            v.resize(0);
           
        }
        reverse(ans.begin(),ans.end());
       return ans;
        
    }
};