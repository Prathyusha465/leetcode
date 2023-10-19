class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1;
        stack<char>s2;
        for(auto it:s)
        {
            if(it=='#' && !s1.empty())
             s1.pop();
            else if(it!='#')
             s1.push(it);
        }
        for(auto it:t)
        {
            if(it=='#' && !s2.empty())
             s2.pop();
            else if(it!='#')
             s2.push(it);
            
        }
        if(s1.size()!=s2.size())
         return false;
        while(!s1.empty() && !s2.empty())
        {
            if(s1.top()!=s2.top())
            {
                return false;
            }
            s1.pop();
            s2.pop();
        }
        return true;
    }
};