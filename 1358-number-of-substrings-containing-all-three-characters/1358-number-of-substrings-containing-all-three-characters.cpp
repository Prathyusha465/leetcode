class Solution {
public:
    
    int numberOfSubstrings(string s) {
        int ans=0;
        int n=s.size();
        int i=0,j=0;
        unordered_map<char,int>m1;
        while(j<n){
            m1[s[j]]++;
            while(m1.size()==3)
            {
                ans=ans+n-j;
                m1[s[i]]--;
                if(m1[s[i]]==0)
                    m1.erase(s[i]);
                i++;
            }
            j++;
        }
        
        return ans;
    }
};