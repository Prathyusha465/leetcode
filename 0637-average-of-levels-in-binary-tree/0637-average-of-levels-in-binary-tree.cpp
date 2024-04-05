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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        queue<TreeNode*>q1;
        q1.push(root);
        while(!q1.empty()){
            int n=q1.size();
            double temp=0;
            for(int i=0;i<n;i++){
                auto it=q1.front();
                temp=temp+it->val;
                q1.pop();
                if(it->left)
                    q1.push(it->left);
                if(it->right)
                    q1.push(it->right);
            }
            temp=temp/(double)n;
            ans.push_back(temp);
        }
        return ans;
    }
};