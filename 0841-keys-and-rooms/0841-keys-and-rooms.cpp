class Solution {
public:
    void dfs(vector<vector<int>>& rooms,vector<int>&vis,int i)
    {
        vis[i]=1;
        for(int j=0;j<rooms[i].size();j++)
        {
            if(!vis[rooms[i][j]])
                dfs(rooms,vis,rooms[i][j]);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int>vis(n,0);
        dfs(rooms,vis,0);
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
                return false;
        }
        return true;
    }
};