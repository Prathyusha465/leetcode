class Solution {
public:
    void dfs(vector<int>adj[],int i,int j,vector<int>&vis,vector<vector<int>>&fans)
    {
        vis[i]=1;
        for(auto it:adj[i])
        {
            if(!vis[it])
            {
                fans[it].push_back(j);
                dfs(adj,it,j,vis,fans);
            }
        }
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
       vector<vector<int>>fans(n);
        vector<int>adj[n];
        for(auto it:edges)
        {
            adj[it[0]].push_back(it[1]);
        } 
        for(int i=0;i<n;i++)
        {
            vector<int>vis(n,0);
            dfs(adj,i,i,vis,fans);
        }
        return fans;
    }
};