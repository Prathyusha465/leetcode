class Solution {
public:
   string str="";
  void helper(int &n,vector<string>&s,int i,int j)
   {
     if(i==n && j==n)
     {
       s.push_back(str);
     }
     if(i<n) 
     {
       str=str+'(';
       helper(n,s,i+1,j);
        str.pop_back();
     }
     if(j<i)
      {
        str=str+')';
        helper(n,s,i,j+1);
        str.pop_back();
     }
      
  }
    vector<string> generateParenthesis(int n) {
     vector<string>s;
     helper(n,s,0,0);
       return s;
    }
};