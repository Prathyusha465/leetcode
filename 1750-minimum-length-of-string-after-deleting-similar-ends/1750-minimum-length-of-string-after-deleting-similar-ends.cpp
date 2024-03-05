class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        int i=0;
        int j=n-1;
        while(i<j && s[i]==s[j]){
            
                char temp=s[i];
                while(j>=i && s[j]==temp){
                    j--;
                }
                while( i<=j && s[i]==temp){
                    i++;
                }
           
            }
            
        
        return j-i+1;
    }
};