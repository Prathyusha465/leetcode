class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string str="balloon";
        unordered_map<char,int>m1;
        for(auto it:text)
        {
            m1[it]++;
        }
        int ans=INT_MAX;
        bool flag=true;
        for(auto it:str)
        {
            if(it=='l' || it=='o')
            {
                    ans=min(ans,m1[it]/2);
            }
            else
                ans=min(ans,m1[it]);
            
        }
        
        return ans;
    }
};