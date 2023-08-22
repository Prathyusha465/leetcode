class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        while(columnNumber)
        {   columnNumber=columnNumber-1;
            char res='A'+columnNumber%26;
            ans=ans+res;
            columnNumber=columnNumber/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};