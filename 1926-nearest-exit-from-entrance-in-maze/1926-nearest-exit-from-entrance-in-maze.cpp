class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        queue<pair<int,pair<int,int>>>q;
        int n=maze.size();
        int m=maze[0].size();
        vector<pair<int,int>>v={{-1,0},{1,0},{0,-1},{0,1}};
        q.push({0,{entrance[0],entrance[1]}});
        maze[entrance[0]][entrance[1]]='+';
        while(!q.empty())
        {
            int level=q.front().first;
            int r=q.front().second.first;
            int c=q.front().second.second;
            q.pop();
            
            for(auto it:v)
            {
                int nr=r+it.first;
                int nc=c+it.second;
                if(nr>=0 && nr<n && nc>=0 && nc<m && maze[nr][nc]=='.')
                {
                    if(nr==0 || nr==n-1 || nc==0 || nc==m-1 )
                        return level+1;
                    else
                    {
                    q.push({level+1,{nr,nc}});
                        maze[nr][nc]='+';
                    }
                    
                }
            }
        }
       return -1; 
    }
};