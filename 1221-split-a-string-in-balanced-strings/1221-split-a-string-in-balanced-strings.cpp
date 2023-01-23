class Solution {
public:
    int balancedStringSplit(string s) {
        int countr=0;
        int countl=0;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
                countr++;
            else if(s[i]=='L')
                countl++;
            if(countr==countl)
            {
                ans++;
                countl=0;
                countr=0;
            }
        }
        return ans;
    }
};