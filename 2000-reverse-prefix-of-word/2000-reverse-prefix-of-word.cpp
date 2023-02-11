class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.size();
        int val=-1;
        for(int i=0;i<n;i++)
        {
            if(word[i]==ch)
            {
                val=i;
                break;
            }
        }
        if(val==-1)
            return word;
        reverse(word.begin(),word.begin()+val+1);
        return word;
    }
};