class Solution {
public:
    void helper(vector<vector<int>>&ans,vector<int>&temp,int i,int n,int k){
        if(i>n){
            if(k==0)
                ans.push_back(temp);
            return;
        }
        helper(ans,temp,i+1,n,k);
        if(k>0){
            temp.push_back(i);
            helper(ans,temp,i+1,n,k-1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>temp;
        helper(ans,temp,1,n,k);
        return ans;
    }
};