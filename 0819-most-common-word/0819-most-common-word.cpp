class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
       unordered_map<string,int>m1;
        int count=0;
        for(int i=0;i<paragraph.size();)
        {
            string s="";
            while(i<paragraph.size() && isalpha(paragraph[i]))
                s.push_back(tolower(paragraph[i++]));
            while(i<paragraph.size() && !isalpha(paragraph[i]))
                i++;
            m1[s]++;
        }
        string ans;
        for(auto it:banned)
            m1[it]=0;
        for(auto it:m1)
        {
            if(it.second>count)
            {
                ans=it.first;
                count=it.second;
            }
        }
        return ans;
    }
};