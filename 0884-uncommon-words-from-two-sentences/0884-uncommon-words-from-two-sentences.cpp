class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>m1;
        vector<string>v;
        for(int i=0;i<s1.size();)
        {
            string s="";
            while(i<s1.size() && isalpha(s1[i]))
                s.push_back(s1[i++]);
            while(i<s1.size() && !isalpha(s1[i]))
                i++;
            m1[s]++;
        }
        for(int i=0;i<s2.size();)
        {
            string s="";
            while(i<s2.size() && isalpha(s2[i]))
                s.push_back(s2[i++]);
            while(i<s2.size() && !isalpha(s2[i]))
                i++;
            m1[s]++;
        }
        for(auto it:m1)
        {
            if(it.second==1)
                v.push_back(it.first);
        }
        
       return v; 
    }
};