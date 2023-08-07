class Solution {
public:
    void dfs(int i,int j,vector<vector<char>>&v,vector<vector<char>>& grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        v[i][j]='2';
        vector<pair<int,int>>p={{-1,0},{1,0},{0,-1},{0,1}};
        for(auto [x,y]:p)
        {
            int di=i+x;
            int dj=j+y;
            if(di>=0 && di<n && dj>=0 && dj<m && grid[di][dj]=='1' && v[di][dj]!='2')
            {
                dfs(di,dj,v,grid);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
       int n=grid.size();
        int m=grid[0].size();
        int count=0;
        vector<vector<char>>v=grid;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               if(v[i][j]!='2' && grid[i][j]=='1')
               {
                    count++;
                 dfs(i,j,v,grid);
                
               }
            }
        }
        return count;
    }
};