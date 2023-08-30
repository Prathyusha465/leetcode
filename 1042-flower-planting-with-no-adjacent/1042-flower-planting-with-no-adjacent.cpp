class Solution {
public:
    void dfs(int i,int ccol,vector<int>&col,vector<int>adj[])
    {
        col[i]=ccol;
        int ncol=ccol+1;
        ncol=ncol%5;
        for(auto it:adj[i])
        {
            if(col[it]==0)
                dfs(it,ncol,col,adj);
            else if(col[it]==col[i])
                dfs(i,ncol,col,adj);
        }
    }
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        vector<int>adj[n];
        vector<int>col(n,0);
        for(auto it:paths)
        {
            adj[it[0]-1].push_back(it[1]-1);
            adj[it[1]-1].push_back(it[0]-1);
            
        }
        for(int i=0;i<n;i++)
        {
            if(col[i]==0)
                dfs(i,1,col,adj);
        }
        return col;
    }
};