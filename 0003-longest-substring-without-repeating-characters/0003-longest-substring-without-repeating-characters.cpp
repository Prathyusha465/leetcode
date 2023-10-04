class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<int,int>m1;
        int maxi=0;
        int i=0;
        int j=0;
        while(j<s.size()){
            if(m1[s[j]]==0){
                m1[s[j]]=1;
                maxi=max(maxi,(int)m1.size());
                j++;
            }
            else{
                while(s[i]!=s[j])
                {
                    m1.erase(s[i]);
                    i++;
                }
                if(s[i]==s[j])
                {
                    m1.erase(s[i]);
                    i++;
                }
            }
            
        }
        return maxi;
    }
};