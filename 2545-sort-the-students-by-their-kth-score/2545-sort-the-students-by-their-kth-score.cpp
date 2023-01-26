class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<vector<int>>final;
        int m=score.size();
        int n=score[0].size();
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<m;i++)
            pq.push({score[i][k],i});
        while(!pq.empty())
        {
            int row=pq.top().second;
            pq.pop();
            final.push_back(score[row]);
        }
        return final;
    }
};