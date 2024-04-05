class Solution {
public:
    string makeGood(string s) {
        string temp="";
        int n=s.size();
       for(auto it:s){
           if(!temp.empty() && abs(temp.back()-it)==32)
               temp.pop_back();
           else
           temp.push_back(it);
       }
        return temp;
    }
};