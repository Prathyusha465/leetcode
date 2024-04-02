class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
  int n=temperatures.size();
  stack<int>st;
        vector<int>ans;
    for(int i=n-1;i>=0;i--){
      while(!st.empty() && temperatures[st.top()]<=temperatures [i])
          st.pop();
       if(st.empty()) 
           ans.push_back(0);
      else
          ans.push_back(abs(st.top()-i));
     st.push(i);
    }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};


