class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
      /*
      int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        int cfresh=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                    q.push({i,j});
                if(grid[i][j]==1)
                    cfresh++;
            }
        }
        if (cfresh == 0)
            return 0;
        if (q.empty())
            return -1;
        int ans=-1;
        vector<pair<int,int>>dr={{-1,0},{1,0},{0,-1},{0,1}};
        while(!q.empty())
        { 
            ans++;
            for(int i=0;i<q.size();i++)
            {
            int r=q.front().first;
            int c=q.front().second;
             q.pop();
            for(auto [a,b]:dr)
            { 
                r=r+a;
                c=c+b;
                if(r>=0 && r<n && c>=0 && c<m && grid[r][c]==1)
                {
                    grid[r][c]=2;
                    q.push({r,c});
                    cfresh--;
                }
            }
            }
            
        }
        if(cfresh==0)
          return ans;
        return -1;*/
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> visited = grid;
        
        queue<pair<int, int>> q;
        int countFreshOrange = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (visited[i][j] == 2) 
                {
                    q.push({i, j});
                }
                if (visited[i][j] == 1) 
                {
                    countFreshOrange++;
                }
            }
        }
        if (countFreshOrange == 0)
            return 0;
        if (q.empty())
            return -1;
        
        int minutes = -1;
        vector<pair<int, int>> dirs = {{1, 0},{-1, 0},{0, -1},{0, 1}};
        while (!q.empty()) 
        {
            int size = q.size();
            while (size--) {
                auto [x, y] = q.front();
                q.pop();
                for (auto [dx, dy] : dirs) {
                    int i = x + dx;
                    int j = y + dy;
                    if (i >= 0 && i < m && j >= 0 && j < n && visited[i][j] == 1) {
                        visited[i][j] = 2;
                        countFreshOrange--;
                        q.push({i, j});
                    }
                }
            }
            minutes++;
    }
        if (countFreshOrange == 0)
            return minutes;
        return -1;
    }
};