class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
       vector<vector<int>>v;
        map<int,int>m1;
        priority_queue<pair<int,int>>pq;
        for(auto it:nums){
            m1[it]++;
        }
        for(auto it:m1){
            pq.push({it.second,it.first});
        }
        if(!pq.empty()){
            auto t1=pq.top();
            pq.pop();
            int n=t1.first;
            while(n){
                vector<int>v1;
                v1.push_back(t1.second);
                v.push_back(v1);
                n--;
            }
        }
        while(!pq.empty()){
            auto temp=pq.top();
            pq.pop();
            for(int i=0;i<temp.first;i++)
            {
                v[i].push_back(temp.second);
            }
        }
        
        return v;
    }
};