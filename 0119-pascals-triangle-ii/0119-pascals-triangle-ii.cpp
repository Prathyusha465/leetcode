class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n=rowIndex+1;
        vector<int>v(n,0);
        v[0]=1;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j>0;--j)
            {
                v[j]=v[j]+v[j-1];
            }
        }
        return v;
    }
};