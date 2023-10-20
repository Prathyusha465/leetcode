class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_map<char,int>m1;
        m1['a']=1;
        m1['e']=1;
        m1['i']=1;
        m1['o']=1;
        m1['u']=1;
        int i=0,j=0;
        int maxi=0;
        int count=0;
        while(j<s.size()){
            if(m1[s[j]])
                count++;
             maxi=max(maxi,count);
            if((j-i+1)==k)
            {
                
                if(m1[s[i]]==1)
                    count--;
                i++;
            }
            j++;
        }
        return maxi;
    }
};