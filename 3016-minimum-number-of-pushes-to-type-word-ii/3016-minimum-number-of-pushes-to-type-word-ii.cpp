class Solution {
public:
    int minimumPushes(string word) {
        map<char,int>m1;
        for(auto it:word){
            m1[it]++;
        }
        priority_queue<int>pq;
        for(auto it:m1){
            pq.push(it.second);
        }
        int count=0;
        int ans=0;
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            if(count<=7){
                ans=ans+it;
                count++;
            }
            else if(count<=15){
                ans=ans+2*it;
                count++;
            }
            else if(count<=23){
                ans=ans+3*it;
                count++;
            }
            else if(count<=26){
                ans=ans+4*it;
                count++;
            }
        }
        return ans;
    }
};