class Solution {
public:
    void dfs(int sr,int sc,int color,vector<vector<int>>& image,int initial)
    {
        int n=image.size();
        int m=image[0].size();
        vector<pair<int,int>>v={{-1,0},{1,0},{0,-1},{0,1}};
        image[sr][sc]=color;
        for(auto [x,y]:v){
            int dr=sr+x;
            int dc=sc+y;
            if(dr>=0 && dr<n && dc>=0 && dc<m && image[dr][dc]==initial && image[dr][dc]!=color)
                dfs(dr,dc,color,image,initial);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int spix=image[sr][sc];
        image[sr][sc]=color;
        dfs(sr,sc,color,image,spix);
        return image;
    }
};