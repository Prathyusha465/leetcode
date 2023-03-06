class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>m1;
        int ans=0;
        for(auto it:s)
            m1[it]++;
        for(auto it:t)
            m1[it]--;
        for(auto it:m1)
        {
            if(it.second<0)
               ans=ans+it.second; 
        }
        return abs(ans);
    }
};