class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
       int count=0;
       vector<int>ind(60,0);
        for(int i=0;i<time.size();i++){
            if(time[i]%60==0)
                count=count+ind[0];
            else
                count=count+ind[60-time[i]%60];
            ind[time[i]%60]++;
        }
        return count;
    }
};