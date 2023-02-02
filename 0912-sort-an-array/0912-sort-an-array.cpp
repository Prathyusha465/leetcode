class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int>pq;
        for(auto it:nums)
            pq.push(it);
        int n=nums.size();
        vector<int>v(n,0);
        while(--n>-1)
        {
            v[n]=pq.top();
            pq.pop();
        }
        return v;
    }
};