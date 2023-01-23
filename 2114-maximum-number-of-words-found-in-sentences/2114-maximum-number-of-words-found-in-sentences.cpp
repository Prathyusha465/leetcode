class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
      
        int maxi=0;
        for(int i=0;i<sentences.size();i++)
        {
            int x=sentences[i].size();
            int count=1;
            for(int j=0;j<x;j++)
            {
                if(sentences[i][j]==' ')
                {
                    count++;
                    maxi=max(count,maxi);
                }
                maxi=max(count,maxi);
            }
        }
        return maxi;
    }
};