class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       vector<pair<int,int>>v1;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                    v1.push_back({i,j});
            }
        }
        for(auto it:v1)
        {
            int r=it.first;
            int c=it.second;
            for(int i=0;i<m;i++)
                matrix[i][c]=0;
            for(int j=0;j<n;j++)
                matrix[r][j]=0;
        }
        
    }
};