class Solution {
public:
    bool areOccurrencesEqual(string s) {
       unordered_map<char,int>m1;
        for(auto it:s)
         m1[it]++;
        int ans=m1[s[0]];
        for(auto it:m1)
        {
           if(it.second!=ans) 
               return false;
        }
        return true;
    }
};