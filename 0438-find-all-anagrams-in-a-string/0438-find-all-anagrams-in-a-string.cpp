class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        map<char,int>m1,m2;
        vector<int>ans;
        for(auto it:p)
            m1[it]++;
        int n=s.size();
        int m=p.size();
        int i=0;
        int j=0;
        while(j<n){
           m2[s[j]]++;
            if(j-i+1 == m){
                if(m1==m2){
                   ans.push_back(i); 
                }
                m2[s[i]]--;
                if(m2[s[i]]==0)
                    m2.erase(s[i]);
                i++;
            }
            j++;
        } 
      
        return ans;
    }
};