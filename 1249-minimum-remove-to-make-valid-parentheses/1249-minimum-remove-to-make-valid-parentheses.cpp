class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>st;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                st.push(i);
            if(s[i]==')')
            {
                if(st.empty())
                {
                    s[i]='0';
                }
                else
                    st.pop();
            }
        }
        while(!st.empty())
        {
            int i=st.top();
            st.pop();
            s[i]='0';
        }
       /* s.erase(remove(s.begin(),s.end(),'*').s.end());
        return s;
        */
        s.erase(remove(s.begin(), s.end(), '0'), s.end());
        return s;
    }     
};