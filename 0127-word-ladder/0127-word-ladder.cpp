class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string,int>>q;
        unordered_set<string>s(wordList.begin(),wordList.end());
        q.push({beginWord,1});
        s.erase(beginWord);
        while(!q.empty())
        {
            string temp=q.front().first;
            int level=q.front().second;
            q.pop();
            if(temp==endWord)
                return level;
            for(int i=0;i<temp.size();i++)
            {
                char original=temp[i];
                for(char j='a';j<='z';j++)
                {
                    temp[i]=j;
                    if(s.find(temp)!=s.end())
                    {
                        q.push({temp,level+1});
                        s.erase(temp);
                    }
                }
                temp[i]=original;
            }
        }
        return 0;
    }
};