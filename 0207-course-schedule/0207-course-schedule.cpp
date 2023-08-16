class Solution {
public:
    bool dfs(int i,vector<vector<int>>&adj,vector<int>&vis,vector<int>&pathv){
        vis[i]=1;
        pathv[i]=1;
        for(auto it:adj[i])
        {
            if(!vis[it])
            {
                if(dfs(it,adj,vis,pathv)==false)
                    return false;
            }
            else if(pathv[it]==1)
                return false;
        }
        pathv[i]=0;
        return true;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=prerequisites.size();
       vector<vector<int>>adj(numCourses);
        vector<int>vis(numCourses,0);
        vector<int>pathv(numCourses,0);
        for(auto it:prerequisites)
        {
            adj[it[0]].push_back(it[1]);
        }
        for(int i=0;i<numCourses;i++)
        {
            if(!vis[i])
            {
                if(dfs(i,adj,vis,pathv)==false)
                    return false;
            }
        }
       return true;     
    }
};