class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
       vector<vector<int>>adj(numCourses);
         vector<int>indegree(numCourses,0);
        queue<int>q;
        for(auto it:prerequisites)
        {
            adj[it[0]].push_back(it[1]);
            indegree[it[1]]++;
        }
        for(int i=0;i<numCourses;i++)
        {
            if(indegree[i]==0)
                q.push(i);
        }
        int count=0;
        while(!q.empty())
        {
            int temp=q.front();
            q.pop();
            count++;
            for(auto it:adj[temp])
            {
                indegree[it]--;
                if(indegree[it]==0)
                    q.push(it);
            }
        }
        if(count==numCourses)
            return true;
        return false;
        
    }
};