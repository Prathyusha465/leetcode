class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>& grid, vector<vector<int>>&vis,int &temp){
        
        vis[i][j]=2;
        temp++;
        vector<pair<int,int>>trav={{-1,0},{1,0},{0,-1},{0,1}};
        for(auto it:trav){
            int tr=i+it.first;
            int tc=j+it.second;
            if(tr>=0 && tr<grid.size() && tc>=0 && tc<grid[0].size() && vis[tr][tc]!=2 && grid[tr][tc]==1){
                dfs(tr,tc,grid,vis,temp);
            }
        }
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
      int maxi=0;
     vector<vector<int>>vis=grid;
     for(int i=0;i<grid.size();i++){
         for(int j=0;j<grid[0].size();j++){
             if(vis[i][j]!=2 && grid[i][j]==1){
            
                 int temp=0;
                 dfs(i,j,grid,vis,temp);
                 maxi=max(maxi,temp);
             }
         }
     }
        return maxi;
    }
};