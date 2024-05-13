class Solution {
public:
    int findPermutationDifference(string s, string t) {
       map<char,int>m1;
       map<char,int>m2;
        for(int i=0;i<s.size();i++)
            m1[s[i]]=i;
        for(int i=0;i<t.size();i++)
            m2[t[i]]=i;
        int sum=0;
        for(auto it:s){
            sum=sum+abs(m1[it]-m2[it]);
        }
        return sum;
    }
};