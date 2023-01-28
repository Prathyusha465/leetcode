class Solution {
public:
    int fillCups(vector<int>& amount) {
        int ans=0;
        for(;max(amount[0],max(amount[1],amount[2]))>0;++ans)
        {
            sort(amount.begin(),amount.end());
            amount[2]--;
            amount[1]--;
        }
        return ans;
    }
};