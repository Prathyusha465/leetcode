class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq;
        for(auto it:gifts)
            pq.push(it);
        long long int ans=0;
        for(int i=0;i<k;i++)
        {
            int maxi=pq.top();
            pq.pop();
            pq.push(sqrt(maxi));
        }
        while(!pq.empty())
        {
            ans=ans+pq.top();
            pq.pop();
        }
        return ans;
    }
};