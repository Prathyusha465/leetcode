class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n=heights.size();
        stack<int>st;
        vector<int>ans(n,0);
        for(int i=n-1;i>=0;i--){
            int count=0;
            if(st.empty()){
                ans[i]=0;
            }
            else{
                while(!st.empty() && heights[i]>st.top()){
                     st.pop();
                    count++;
                    
                }
                   
                if(st.empty())
                    ans[i]=count;
                else
                    ans[i]=++count;
            }
            st.push(heights[i]);
        }
        return ans;
    }
};