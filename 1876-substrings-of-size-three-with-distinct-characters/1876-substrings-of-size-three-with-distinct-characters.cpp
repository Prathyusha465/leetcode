class Solution {
public:
    int countGoodSubstrings(string s) {
       map<int,int>m1;
       int n=s.size();
        int i=0;
        int j=0;
        int count=0;
        while(j<n){
            m1[s[j]]++;
            if((j-i+1)<3)
                j++;
            else if((j-i+1)==3){
                if(m1.size()==3)
                    count++;
                j++;
                m1[s[i]]--;
                if(m1[s[i]]==0)
                    m1.erase(s[i]);
                i++;
            }
        }
        return count;
    }
};