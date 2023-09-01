class Solution {
public:
    void dfs(int node, vector<int>&vis,vector<int>adj[])
    {
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
                dfs(it,vis,adj);
        }
    }
    int minScore(int n, vector<vector<int>>& roads) {
        vector<int>adj[n+1];
        for(auto it:roads)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int>vis(n+1,0);
        dfs(1,vis,adj);
        int mini=INT_MAX;
        for(auto it:roads){
            if(vis[it[0]] && vis[it[1]])
                mini=min(mini,it[2]);
        }
        return mini;
    }
};