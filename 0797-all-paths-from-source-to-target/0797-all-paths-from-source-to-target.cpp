class Solution {
public:
    void dfs(vector<vector<int>>& graph,int curr,vector<int>&temp,int f, vector<vector<int>>&res)
    {
        temp.push_back(curr);
        if(curr==f)
            res.push_back(temp);
        else
        {
            for(auto it:graph[curr])
            {
                dfs(graph,it,temp,f,res);
                
            }
        }
        temp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
      int finalnode=graph.size()-1;
      vector<vector<int>>res;
        vector<int>temp;
        dfs(graph,0,temp,finalnode,res);
        return res;
    }
};