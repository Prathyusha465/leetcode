class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
            priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int, int> >>pq;
      
           for(int i=0;i<nums.size();i++){
               pq.push({nums[i],i});
           }
            while(k--){
                int temp=pq.top().first;
                int ind=pq.top().second;
                pq.pop();
                pq.push({temp*multiplier,ind});
            }
        vector<int>ans(nums.size(),0);
         while(!pq.empty()){
             int ind=pq.top().second;
             ans[ind]=pq.top().first;
             pq.pop();
         }
        return ans;
    }
};