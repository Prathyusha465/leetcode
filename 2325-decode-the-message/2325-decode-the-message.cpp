class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char,char>m1;
        char temp='a';
        for(int i=0;i<key.size();i++)
        {  
            if((m1.find(key[i])==m1.end()) && key[i]!=' '){
            m1[key[i]]=temp;
            temp++;
            }
        }
        string ans="";
        for(auto it:message)
        {
            if(it!=' ')
            ans=ans+m1[it];
            else
                ans=ans+" ";
        }
        return ans;
    }
};

        