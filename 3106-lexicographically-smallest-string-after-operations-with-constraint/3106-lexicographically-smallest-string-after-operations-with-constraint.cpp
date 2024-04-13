class Solution {
public:
    string getSmallestString(string s, int k) {
        int x=k;
        for(int i=0;i<s.size();i++){
            if(k){
                int mod=min(26-(s[i]-'a'),s[i]-'a');
                if(mod<=k){
                   k=k-mod;
                    s[i]='a';
                }
                else{
                     s[i]=s[i]-k;
                    k=0;
                    break;
                }
                   
                    
            }
        }
        return s;
    }
};