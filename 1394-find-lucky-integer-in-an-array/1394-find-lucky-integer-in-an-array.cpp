class Solution {
public:
    int findLucky(vector<int>& arr) {
      map<int,int>m1;
        int ans=-1;
        for(auto it:arr)
            m1[it]++;
        for(auto it:m1)
        {
            if(it.second==it.first)
                ans=it.second;
        }
        return ans;
    }
};