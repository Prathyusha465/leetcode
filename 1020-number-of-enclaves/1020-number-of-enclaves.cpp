class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
      int n=grid.size(),m=grid[0].size();
        queue<pair<int,int>>q;
        vector<pair<int,int>>v={{-1,0},{1,0},{0,-1},{0,1}};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || i==n-1 || j==0 || j==m-1){
                    if(grid[i][j])
                    {
                        q.push({i,j}),grid[i][j]=0;
                    }
                }
            }
        }
        while(q.size()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(auto it:v)
            {
                int nx=x+it.first;
                int ny=y+it.second;
                if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]){
                    grid[nx][ny]=0;
                    q.push({nx,ny});
                }
            }
            }
        
        int ct=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j])ct++;
            }
        }
        return ct;
    }
};