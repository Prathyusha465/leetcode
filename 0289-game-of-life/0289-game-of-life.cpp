class Solution {
public:
     bool valid(int i, int j, int n, int m)
    {
        if(i<0 || i>=n || j<0 || j>=m)
            return false;
        return true;
    }
    int countLiveNeigh(int i, int j, vector<vector<int>>& b)
    {
        int chi[] = {1, -1, 1, -1, -1, 0, 1,  0};
        int chj[] = {1, -1, -1, 1,  0, 1, 0, -1};
        int liveN = 0;
        for(int ch = 0; ch < 8; ch++) {
            if(valid(i + chi[ch], j + chj[ch], b.size(), b[0].size()) 
               && 
               (b[i+chi[ch]][j + chj[ch]] == 1 || b[i+chi[ch]][j + chj[ch]] == 2)
              )
                liveN += 1;
        }
        
        return liveN;
    }
     
    void gameOfLife(vector<vector<int>>& board) {
       int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int res=countLiveNeigh(i,j,board);
                if(board[i][j]==1 && (res<2))
                    board[i][j]=2;
                else if(board[i][j] && (res==3 || res==2))
                    board[i][j]=1;
                else if(board[i][j] && res>3)
                    board[i][j]=2;
                else if(board[i][j]==0 && (res==3))
                    board[i][j]=-1;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==2)
                    board[i][j]=0;
                else if(board[i][j]==-1)
                    board[i][j]=1;
            }
        }
    }
};