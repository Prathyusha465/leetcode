class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        string s="";
        int i=0;
        int j=0;
        while(i<n && j<m)
        {
            s=s+word1[i]+word2[j];
            i++;
            j++;
        }
        if(i<n)
        {
            while(i<n)
            {
                s=s+word1[i];
                i++;
            }
        }
        if(j<m)
        {
            while(j<m)
            {
                s=s+word2[j];
                j++;
            }
        }
        
        return s;
    
    }
};