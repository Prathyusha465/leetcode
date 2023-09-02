class Solution {
public:
    int dfs(int i,vector<int>&vis, vector<int>adj[])
    {
        if(vis[i]==1)
            return 0;
        vis[i]=1;
        int ans=0;
        for(auto it:adj[i])
        {
            if(!vis[it])
            {
                
                ans+=dfs(it,vis,adj);
            }
        }
        return ans+1;
    }
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        vector<int>vis(n,0);
        vector<int>adj[n];
        int count=0;
        for(auto it:edges)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        for(auto it:restricted)
            vis[it]=1;
        return dfs(0,vis,adj);
    }
};