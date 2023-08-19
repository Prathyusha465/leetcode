class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int n=grid.size();
        int m=grid[0].size();
        if(grid[0][0]!=0 || grid[n-1][m-1]!=0)
            return -1;
        q.push({0,0});
        vector<vector<int>>vis(n,vector<int>(m,0));
         vis[0][0]=1;
        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=-1;i<2;i++)
            {
                for(int j=-1;j<2;j++)
                {
                    int nrow=r+i;
                    int ncol=c+j;
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==0 && !vis[nrow][ncol])
                    {
                        q.push({nrow,ncol});
                        vis[nrow][ncol]=vis[r][c]+1;
                    }
                }
            }
        }
        if(vis[n-1][m-1]==0)
            return -1;
        return vis[n-1][m-1];
    }
};