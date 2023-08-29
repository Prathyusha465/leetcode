class Solution {
public:
    bool dfs(int s, vector<int>&vis,vector<int>&col,vector<int>adj[]){
        vis[s]=1;
        for(auto it:adj[s])
        {
            if(col[it]==-1)
            {
                col[it]=!col[s];
                if(dfs(it,vis,col,adj)==false)
                    return false;
            }
            else if(col[it]==col[s])
                return false;
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int>adj[n+1];
        for(auto it:dislikes)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int>vis(n+1,0);
        vector<int>col(n+1,-1);
        for(int i=1;i<=n;i++)
        {
            if(col[i]==-1)
            {
                if(dfs(i,vis,col,adj)==false)
                    return false;
            }
        }
        return true;
    }
};