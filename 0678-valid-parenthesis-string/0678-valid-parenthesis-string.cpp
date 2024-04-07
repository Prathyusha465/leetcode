class Solution {
public:
    bool checkValidString(string s) {
       stack<int>chap;
        stack<int>star;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
             chap.push(i);
            else if(s[i]=='*')
             star.push(i);
            else if(s[i]==')')
            {
                if(!chap.empty())
                 chap.pop();
                else if(!star.empty())
                 star.pop();
                else
                 return false;
            }

        }
        while(!chap.empty() && !star.empty() && chap.top()<star.top())
        {
            chap.pop();
            star.pop();
        }
        return chap.empty();
    }
};