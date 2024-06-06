class Solution {
public:
    void helper(int start,int end,vector<char>& s){
        if(start>=end)
            return;
        swap(s[start],s[end]);
        start++;
        end--;
        helper(start,end,s);
    }
    void reverseString(vector<char>& s) {
        int start=0;
        int end=s.size()-1;
        helper(start,end,s);
    }
};