class Solution {
public:
    void dfs(int i,vector<int>&vis, vector<int>adj[],int count)
    {
        vis[i]=1;
        for(auto it:adj[i])
        {
            if(!vis[it])
                dfs(it,vis,adj,count);
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<int>adj[n];
        for(auto v : connections)
        {
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
       int s=connections.size();
        if(s<n-1)
            return -1;
        int count=0;
        vector<int>vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                count++;
                dfs(i,vis,adj,count);
            }
        }
        return count-1;
    }
};