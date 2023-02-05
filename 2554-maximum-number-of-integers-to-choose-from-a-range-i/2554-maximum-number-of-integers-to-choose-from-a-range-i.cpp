class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
      map<int,int>m1;
        int sum=0;
        int ans=0;
      for(auto it:banned)
          m1[it]++;
        for(int i=1;i<=n;i++)
        {
            if(!m1[i] && (sum+i)<=maxSum)
            {
                ans++;
                sum=sum+i;
            }
        }
        return ans;
    }
};