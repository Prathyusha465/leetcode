class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
      int n=items.size();
      int m=items[0].size();
     int col=0;
        int val=0;
        if(ruleKey=="color")
            col=1;
        else if(ruleKey=="type")
            col=0;
        else
            col=2;
        for(int i=0;i<n;i++)
        {
            if(items[i][col]==ruleValue)
                val++;
        }
        return val;
    }
};