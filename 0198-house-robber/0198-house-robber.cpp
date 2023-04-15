class Solution {
public:
    /*
    int helper(vector<int>& nums,int i,vector<int>&dp)
    {
        if(i<0)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int pick;
            pick= nums[i]+helper(nums,i-2,dp);
        int npick=helper(nums,i-1,dp);
        return dp[i]=max(pick,npick);
    }*/
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,0);
       dp[0]=nums[0];
        for(int i=1;i<n;i++)
        {   
            if(i==1)
                dp[i]=max(nums[0],nums[1]);
            if(i>1)
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        return dp[n-1];
    }
};