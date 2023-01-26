class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
       int n=points.size();
        int m=queries.size();
        vector<int>v;
        for(auto q:queries)
        {  
            int count=0;
            int radius=q[2]*q[2];
            for(auto p:points)
            {
                if(((p[0]-q[0])*(p[0]-q[0])+(p[1]-q[1])*(p[1]-q[1]))<=radius)
                    count++;
            }
            v.push_back(count);
        }
        return v;    
    }
};