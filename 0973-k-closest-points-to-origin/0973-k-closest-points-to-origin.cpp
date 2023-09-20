class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        for(auto it:points){
            pq.push({it[0]*it[0]+it[1]*it[1],{it[0],it[1]}});
        }
        vector<vector<int>>ans;
        for(int i=0;i<k;i++)
        {
            vector<int>temp;
            auto it=pq.top();
            temp.push_back(it.second.first);
            temp.push_back(it.second.second);
            ans.push_back(temp);
            temp.resize(0);
            pq.pop();
            
        }
        return ans;
    }
};