class Solution {
public:
    string dstring(string &s,int &i){
        string res;
        for(int count=0;i<s.length() && s[i]!=']';i++)
        {
            if(isdigit(s[i]))
                count=count*10+s[i]-'0';
            if(isalpha(s[i]))
                res=res+s[i];
            else if(s[i]=='[')
            {
                string t=dstring(s,++i);
                while(count>0)
                {
                    res=res+t;
                    count--;
                }
            }
        }
        return res;
    }
        string decodeString(string s) {
        int i=0;
        return dstring(s,i);
    }
};