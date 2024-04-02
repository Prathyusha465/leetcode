class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int count=0;
        for(auto it:s){
            if(it=='('){
                st.push(it);
            }
            else if(it==')'){
                if(st.size())
                    st.pop();
                else
                    count++;
            }
        }
        return count+st.size();
    }
};