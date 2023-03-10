class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map<char,int>m1;
        for(auto it:brokenLetters)
            m1[it]++;
        int count=0;
        int ans=0;
        for(int i=0;i<text.size();i++)
        {
            if(text[i]==' ')
            {
                 if(count==0)
                     ans++;
                 count=0;
            }
            else if(m1.count(text[i]))
                count++;
            
        }
        if(count==0)
            ans++;
        return ans;
    }
};