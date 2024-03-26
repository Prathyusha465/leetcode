class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int>m1,m2;
        for(auto it:s1){
            m1[it]++;
        }
        int i=0;
        int j=0;
        int n=s2.size();
        int m=s1.size();
        while(j<n){
            m2[s2[j]]++;
            if(j-i+1==m){
                if(m1==m2)
                    return true;
                m2[s2[i]]--;
                if(m2[s2[i]]==0)
                    m2.erase(s2[i]);
                i++;
            }
            
         j++;   
        }
        return false;
    }
};