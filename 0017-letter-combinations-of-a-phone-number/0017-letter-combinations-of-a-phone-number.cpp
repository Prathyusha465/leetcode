class Solution {
public:
    void helper(vector<string>&ans,map<char,vector<string>>m1,string digits,string temp,int ind){
        if(ind==digits.size()){
            ans.push_back(temp);
            return;
        }
        for(auto it:m1[digits[ind]]){
            temp=temp+it;
            helper(ans,m1,digits,temp,ind+1);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        map<char,vector<string>> m1={
            {'2',{"a","b","c"}},
            {'3',{"d","e","f"}},
            {'4',{"g","h","i"}},
            {'5',{"j","k","l"}},
            {'6',{"m","n","o"}},
            {'7',{"p","q","r","s"}},
            {'8',{"t","u","v"}},
            {'9',{"w","x","y","z"}}
   };
         vector<string>ans;
        if(digits.length()==0)
            return ans;

        helper(ans,m1,digits,"",0);
        return ans;
    }
};