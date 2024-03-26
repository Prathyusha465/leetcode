class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char,int>m1;
        int i=0;
        int j=0;
        int maxi=0;
        int res=0;
        while(j<s.size()){
            m1[s[j]]++;
            maxi=max(maxi,m1[s[j]]);
            if(j-i+1-maxi >k){
                m1[s[i]]--;
                i++;
            }
            res=max(res,j-i+1);
            j++;
        }
        return res;
    }
};