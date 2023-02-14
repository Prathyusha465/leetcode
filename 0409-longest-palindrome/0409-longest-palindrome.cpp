class Solution {
public:
    int longestPalindrome(string s) {
       map<int,int>m1;
        for(auto it:s)
            m1[it]++;
        int ans=0;
        int maxi=0;
        for(auto it:m1)
        {
            if(it.second%2!=0)
                ans=ans+1;
        }
        if(ans>1)
         return s.size()-ans+1;
        return s.size();
    }
};