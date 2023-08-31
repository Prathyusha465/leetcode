class Solution {
public:
    bool dfs(int j1,int j2,int tcap,int target,int jug,vector<int>&vis){
        if(jug<0 || jug>tcap || vis[jug])
            return false;
        if(jug==target)
            return true;
        vis[jug]=1;
        return (dfs(j1,j2,tcap,target,jug-j1,vis)|| dfs(j1,j2,tcap,target,jug-j2,vis) || dfs(j1,j2,tcap,target,jug+j1,vis)|| dfs(j1,j2,tcap,target,jug+j2,vis));
    }
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        int tcap=jug1Capacity+jug2Capacity;
        vector<int>vis(tcap+1,0);
        return dfs(jug1Capacity,jug2Capacity,tcap,targetCapacity,0,vis);
    }
};