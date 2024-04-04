class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n=s.size();
        map<string,int>m1;
        vector<string>ans;
        int j=0;
       while(j+10 <=n){
         string temp= s.substr(j,10);
         if(m1.find(temp)!=m1.end()){
                if(m1[temp]==1)
                    ans.push_back(temp);
             }
           m1[temp]++;
           j++;
       }
        return ans;
    }
};