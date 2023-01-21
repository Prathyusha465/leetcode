# leetcode









class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans="";
        int x=num1.size()-1;
        int y=num2.size()-1;
        int carry=0;
        while(x>=0 || y>=0 || carry)
        {
            int temp=0;
            if(x>=0)
            {
              carry+=num1[x]-'0';
               x--;
            }
            if(y>=0)
            {
              carry+=num2[y]-'0';
               y--;
            }
       ans=ans+char(carry%10+'0');
       carry=carry/10;

        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
