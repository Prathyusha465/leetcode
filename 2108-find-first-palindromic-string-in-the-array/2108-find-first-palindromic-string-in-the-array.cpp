class Solution {
public:
    bool ispalindrome(string s)
    {
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]!=s[n-i-1])
                return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            if(ispalindrome(words[i]))
                return words[i];
        }   
        return {};
    }
};