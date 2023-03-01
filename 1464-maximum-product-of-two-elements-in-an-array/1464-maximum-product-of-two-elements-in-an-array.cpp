class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq;
        for(auto it:nums)
            pq.push(it);
        int maxi=pq.top();
        pq.pop();
        return (maxi-1)*(pq.top()-1);
    }
};