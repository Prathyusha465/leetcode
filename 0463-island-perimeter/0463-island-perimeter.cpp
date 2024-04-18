class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
     int original=0;
     int repeat=0;
   for(int i=0;i<grid.size();i++)
   {
   for(int j=0;j<grid[0].size();j++)
   {
       if(grid[i][j]==1)
       {
         original++;
       
         if(i!=0&& grid[i-1][j]==1)
           repeat++;
         if(j!=0&& grid[i][j-1]==1)
           repeat++;
       }
   }
   }
    return 4*original-2*repeat;
       
    }
};