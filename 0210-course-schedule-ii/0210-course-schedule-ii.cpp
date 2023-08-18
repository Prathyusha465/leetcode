class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>indegree(numCourses,0);
        vector<int>vis(numCourses,0);
        int n=prerequisites.size();
        for(auto it:prerequisites)
        {
            adj[it[1]].push_back(it[0]);
            indegree[it[0]]++;
        }
        queue<int>q;
        for(int i=0;i<numCourses;i++)
        {
            if(indegree[i]==0)
                q.push(i);
                
        }
        vector<int>ans;
        while(!q.empty())
        {
            int temp=q.front();
            q.pop();
            ans.push_back(temp);
            for(auto it:adj[temp])
            {
                indegree[it]--;
                if(indegree[it]==0)
                    q.push(it);
            }
        }
        if(ans.size()==numCourses)
            return ans;
        vector<int>nul;
        return nul;
    }
};