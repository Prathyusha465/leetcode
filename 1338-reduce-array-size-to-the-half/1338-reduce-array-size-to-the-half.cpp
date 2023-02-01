class Solution {
public:
    int minSetSize(vector<int>& arr) {
      unordered_map<int,int>m1;
     priority_queue<int>pq;
     for(auto it:arr) 
         m1[it]++;
     for(auto it:m1) 
        pq.push(it.second);
     int rem=0;
       int res=0;
        while(rem<arr.size()/2) 
        {
           rem=rem+pq.top();
            pq.pop();
            res++;
        }
        return res;                                
    }
};