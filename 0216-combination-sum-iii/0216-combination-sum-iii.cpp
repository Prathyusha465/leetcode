class Solution {
public:
    void helper(vector<vector<int>>&ans,vector<int>temp,int k,int n,int num,int sum){
        if(num>9){
            if(k==0 && sum==0){
                ans.push_back(temp);
            }
            return;
        }
        helper(ans,temp,k,n,num+1,sum);
        if(sum>=num && k){
            temp.push_back(num);
            helper(ans,temp,k-1,n,num+1,sum-num);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>temp;
        helper(ans,temp,k,n,1,n);
        return ans;
    }
};