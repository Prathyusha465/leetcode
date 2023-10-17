class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int i=0;
        int j=0;
        int t=0;
        int f=0;
        int count=0;
        int maxi=0;
        while(j<answerKey.size()){
            if(answerKey[j]=='T')
                t++;
            else
                f++;
            count=min(t,f);
            if(count<=k)
                maxi=max(maxi,j-i+1);
            else
            {
                while(count>k)
                {
                    if(answerKey[i]=='T')
                        t--;
                    else
                        f--;
                    count=min(f,t);
                    i++;
                }
            }
            j++;
                
        }
        return maxi;
    }
};