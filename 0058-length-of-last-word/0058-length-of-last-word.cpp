class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0;
        int temp=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                if(temp!=0){
                   len=temp;
                temp=0; 
                }
                
            }
            else
                temp++;
        }
        if(temp!=0){
            len=temp;
        }
        return len;
    }
};