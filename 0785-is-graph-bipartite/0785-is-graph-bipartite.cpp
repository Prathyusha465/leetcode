class Solution {
public:
    bool dfs(int i,vector<vector<int>>& graph,vector<int>&v,int col){
        v[i]=col;
        for(auto it:graph[i])
        {
            if(v[it]==-1){
                if(dfs(it,graph,v,!col)==false) return false;
            }
            else if(v[it]==col)
                return false;
    }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>v(n,-1);
         
        for(int i=0;i<n;i++)
        {
            if(v[i]==-1)
                if(dfs(i,graph,v,0)==false)
                    return false;
        }
        return true;
    }
};