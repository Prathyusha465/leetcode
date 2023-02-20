class Solution {
public:
    bool isPalindrome(int x) {
        long long int ans=x;
        if(ans<0)
        {
            return false;
        }
        long long int temp=0;
        while(ans>0)
        {
            int r=ans%10;
            temp=temp*10+r;
            ans=ans/10;
        }
        if(x==temp)
            return true;
        return false;
        
    }
};