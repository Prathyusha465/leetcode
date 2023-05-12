class Solution {
public:
    bool isIsomorphic(string s, string t) {
    unordered_map<char,char>m1;
     unordered_map<char,char>m2;
     int x=s.size();
     int y=t.size();
     if(x!=y) 
       return false;
   for(int i=0;i<x;i++)
   {
if(m1.find(s[i])==m1.end() && m2.find(t[i])==m1.end())
        m1[s[i]]=t[i];
        m2[t[i]]=s[i];
    }


 for(int i=0;i<x;i++)
 {
if(m1[s[i]]!=t[i] || m2[t[i]]!=s[i]) 
  return false;
        }

 
   
        return true;
    }
};