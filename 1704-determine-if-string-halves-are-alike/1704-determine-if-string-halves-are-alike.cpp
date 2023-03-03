class Solution {
public:
    bool halvesAreAlike(string s) {
      vector<char>v1;
     vector<char>v2;
        int n=s.size();
        for(int i=0;i<n/2;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                v1.push_back(s[i]);
        }
        for(int i=n/2;i<n;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                v2.push_back(s[i]);
        }
        if(v1.size()==v2.size())
            return true;
        return false;
    }
};