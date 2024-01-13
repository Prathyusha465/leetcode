class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
       map<char,int>m1,m2;
        set<char>s2,s1;
        for(auto it:word1){
            m1[it]++;
            s1.insert(it);
        }
        for(auto it:word2){
           m2[it]++;
            s2.insert(it);
        }
            
        vector<int>v1;
        vector<int>v2;
        for(auto it:m1)
            v1.push_back(it.second);
        for(auto it:m2)
            v2.push_back(it.second);
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        return v1==v2 && s1==s2;
    }
};