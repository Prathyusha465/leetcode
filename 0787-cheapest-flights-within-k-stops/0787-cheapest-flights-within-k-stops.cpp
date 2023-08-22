class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
      vector<pair<int,int>>adj[n];
        for(auto it:flights)
        {
            adj[it[0]].push_back({it[1],it[2]});
        }
        queue<pair<int,pair<int,int>>>q;
        q.push({src,{0,0}});
        vector<int>v(n,1e9);
        v[src]=0;
        while(!q.empty())
        {
            int node=q.front().first;
            int dist=q.front().second.first;
            int i=q.front().second.second;
            q.pop();
            for(auto it:adj[node])
            {
                int newn=it.first;
                int newdist=it.second;
                if(newdist+dist<v[newn] && i<=k)
                {
                    v[newn]=newdist+dist;
                    q.push({newn,{dist+newdist,i+1}});
                }
            }
        }
        if(v[dst]==1e9)
            return -1;
        return v[dst];
    }
};