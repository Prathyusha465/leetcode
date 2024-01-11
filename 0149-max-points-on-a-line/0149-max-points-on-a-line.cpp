class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int ans=1; 
        int n=points.size();
        sort(points.begin(),points.end());
        for(int i=0;i<n-1;i++)
        {
           map<double,int> slope;
           for(int j=i+1;j<n;j++)
           {
               if(points[i][1]==points[j][1])
                    slope[INT_MAX]++;
               else
               {
                   double x=(double)(points[j][0]-points[i][0])/(double)(points[j][1]-points[i][1]);
                   slope[x]++;
               }
           }
            int temp = 0;
            for(auto it:slope)
                temp = max(temp, it.second+1);
            ans = max(temp, ans);
       }
       return ans;


    }
};