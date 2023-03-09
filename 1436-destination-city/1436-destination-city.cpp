class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int>m1;
        string ans;
       for(int i=0;i<paths.size();i++)
       {
           for(int j=0;j<paths[i].size();j++)
           {
               m1[paths[i][j]]++;
           }
       }
     vector<string>v;
        for(auto it:m1)
        {
            if(it.second==1)
                v.push_back(it.first);
        }
        for(int i=0;i<paths.size();i++)
        {
            if(paths[i][1]==v[0])
                ans=v[0];
            if(paths[i][1]==v[1])
                ans=v[1];
        }
        return ans;
    }
};