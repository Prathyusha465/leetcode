class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m1;
        for(auto it:nums)
            m1[it]++;
        priority_queue<pair<int,int>>pq;
        vector<int>v1;
        for(auto [num,freq]:m1)
            pq.push({freq,num});
        while(k--)
        {
            v1.push_back(pq.top().second);
            pq.pop();
        }
        return v1;
    }
};