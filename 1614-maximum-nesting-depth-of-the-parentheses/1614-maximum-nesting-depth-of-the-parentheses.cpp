class Solution {
public:
    int maxDepth(string s) {
        int maxi=0;
        int count=0;
        for(auto it:s)
        {
            if(it=='(')
                count++;
            else if(it==')')
                count--;
            else
                continue;
            maxi=max(maxi,count);
        }
        return maxi;
    }
};