class Solution {
public:
    void solve(vector<vector<char>>& board) {
        queue<pair<int,int>>q;
        vector<pair<int,int>>v={{-1,0},{1,0},{0,-1},{0,1}};
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++){
                if(i*j==0 || i==n-1 || j==m-1){
                if(board[i][j]=='O')
                {
                    board[i][j]='a';
                    q.push({i,j});
                }
                }
            }
        }
        while(q.size())
        {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(auto it:v)
            {
                int nx=x+it.first;
                int ny=y+it.second;
                if(nx>=0 && nx<n && ny>=0 && ny<m && board[nx][ny]=='O')
                {
                    board[nx][ny]='a';
                    q.push({nx,ny});
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='O')
                    board[i][j]='X';
               else if(board[i][j]=='a')
                   board[i][j]='O';
            }
        }
    }
};