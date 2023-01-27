class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        int n=stones.size();
        for(int i=0;i<n;i++)
            pq.push(stones[i]);
        while(pq.size()>1)
        {
            int max1=pq.top();
            pq.pop();
            int max2=pq.top();
            pq.pop();
            int temp=max1-max2;
            if(temp>0)
                pq.push(temp);
        }
        if(pq.size()!=0)
        return pq.top();
        return 0;
    }
};