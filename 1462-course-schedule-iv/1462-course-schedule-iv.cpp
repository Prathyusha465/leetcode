class Solution {
public:
    bool dfs(int s,int e,vector<int>&vis,vector<int>adj[])
    {
        if(s==e)
            return true;
        if(vis[s])
            return false;
        vis[s]=1;
        for(auto it:adj[s])
        {
            if(!vis[it])
                if(dfs(it,e,vis,adj)==true)
                    return true;
        }
        return false;
    }
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
      vector<int>adj[numCourses];
        for(auto it:prerequisites)
        {
            adj[it[0]].push_back(it[1]);
        }
        vector<bool>ans;
        for(auto it:queries){
            vector<int>vis(numCourses,0);
            ans.push_back(dfs(it[0],it[1],vis,adj));
        }
        return ans;
    }
};