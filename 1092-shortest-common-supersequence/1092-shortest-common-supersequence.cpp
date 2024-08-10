class Solution {
public:
   /* int helper(int n,int m,string str1,string str2,vector<vector<int>>&dp){
        if(n==0 || m==0){
            return 0;
        }
        if(dp[n][m]!=-1)
            return dp[n][m];
        if(str1[n-1]==str2[m-1]){
            return dp[n][m]=1+helper(n-1,m-1,str1,str2,dp);
        }
        else{
            return dp[n][m]=max(helper(n-1,m,str1,str2,dp),helper(n,m-1,str1,str2,dp));
        }
    }
    */
    string shortestCommonSupersequence(string str1, string str2) {
        int n=str1.size();
        int m=str2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
      //  helper(n,m,str1,str2,dp);
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 || j==0)
                    dp[i][j]=0;
                else if(str1[i-1]==str2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        string temp="";
        int i=n;
        int j=m;
        while(i>0 && j>0){
            if(str1[i-1]==str2[j-1]){
                temp=temp+str1[i-1];
                i--;
                j--;
            }
            else{
                if(dp[i-1][j]>dp[i][j-1]){
                    temp=temp+str1[i-1];
                    i--;
                }
                else{
                    temp=temp+str2[j-1];
                    j--;
                }
            }
        }
        while(i>0){
            temp=temp+str1[i-1];
            i--;
        }
        while(j>0){
            temp=temp+str2[j-1];
            j--;
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};