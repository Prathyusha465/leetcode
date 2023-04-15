class Solution {
public:
    int helper(vector<vector<int>>& obstacleGrid,int i,int j,vector<vector<int>>&dp)
    {
        if(i==0 && j==0 && obstacleGrid[i][j]!=1)
            return 1;
        if(i<0 || j<0)
            return 0;
        if(obstacleGrid[i][j]==1)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int up=helper(obstacleGrid,i-1,j,dp);
        int left=helper(obstacleGrid,i,j-1,dp);
        return dp[i][j]=left+up;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        dp[0][1]=1;
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(!obstacleGrid[i-1][j-1])
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m][n];
    }
};