class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
     unordered_map<int,vector<int>>m1;
    vector<vector<int>>final;
    for(int i=0;i<groupSizes.size();i++)
    {
      int key=groupSizes[i];
     m1[key].push_back(i);
      if(m1[key].size()==key)
      {
         final.push_back(m1[key]);
         m1.erase(key);
      }
    }
   return final;
        

    }
};