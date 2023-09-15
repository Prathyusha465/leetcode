class Solution {
public:
    string reorganizeString(string s) {
        map<char,int>m1;
        for(auto it:s)
            m1[it]++;
        priority_queue<pair<int,char>>pq;
        for(auto it:m1)
        {
            pq.push({it.second,it.first});
        }
        string ans="";
        while(pq.size()>1)
        {
           auto it1=pq.top();
            pq.pop();
           auto it2=pq.top();
            pq.pop();
           ans=ans+it1.second;
           ans=ans+it2.second;
            if(it1.first-1>0)
                pq.push({it1.first-1,it1.second});
            if(it2.first-1>0)
                pq.push({it2.first-1,it2.second});
        }
        if(!pq.empty())
        {
            if(pq.top().first>1)
                return "";
            else 
                ans=ans+pq.top().second;
        }
        return ans;
    }
};