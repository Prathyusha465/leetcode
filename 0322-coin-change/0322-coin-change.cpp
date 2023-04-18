class Solution {
public:
    int helper(vector<int>& coins, int amount,int n,vector<vector<int>>&dp)
    {
        if(amount==0)
            return 0;
        if(n<0 || amount<0)
            return 1e8;
        if(dp[n][amount]!=-1)
            return dp[n][amount];
        int npick=helper(coins,amount,n-1,dp);
        int pick=1+helper(coins,amount-coins[n],n,dp);
        return dp[n][amount]=min(npick,pick);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        if(helper(coins,amount,n-1,dp)>=1e8)
            return -1;
        return helper(coins,amount,n-1,dp);
    }
};