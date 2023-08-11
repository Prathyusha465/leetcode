class Solution {
public:
    int helper(int amount,vector<int>& coins,int n,vector<vector<int>>&dp)
    {
        
        if(amount==0)
            return 1;
        if(n==0)
            return 0;
        if(dp[amount][n]!=-1)
            return dp[amount][n];
        if(coins[n-1]<=amount)
            return dp[amount][n]=(helper(amount-coins[n-1],coins,n,dp)+helper(amount,coins,n-1,dp));
        else
        return dp[amount][n]=helper(amount,coins,n-1,dp);
        return 0;
    }
     int change(int amount, vector<int>& coins) {
          int n=coins.size();
         vector<vector<int>>dp(amount+1,vector<int>(n+1,-1));
       if(amount==0) 
           return 1;
         if(n==0)
             return 0;
         return helper(amount,coins,n,dp);
     }
};
    