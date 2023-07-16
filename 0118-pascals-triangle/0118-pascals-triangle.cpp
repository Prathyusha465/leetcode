class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>>v1;
        for(int i=0;i<numRows;i++)
        {
            vector<int>v(i+1,1);
            for(int j=1;j<i;j++)
                v[j]=v1[i-1][j-1]+v1[i-1][j];
            v1.push_back(v);
        }
        return v1;
    }
};