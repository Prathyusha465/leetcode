class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
         int n=heights.size();
        stack<int>st1;
        stack<int>st2;
        vector<int>rm(n,-1);
        vector<int>lm(n,-1);
        for(int i=0;i<n;i++){
            while(!st1.empty() && heights[st1.top()]>=heights[i]){
                st1.pop();
            }
            if(st1.empty())
                lm[i]=-1;
            else
                lm[i]=st1.top();
            st1.push(i);
                
        }
        for(int i=n-1;i>=0;i--){
            while(!st2.empty() && heights[st2.top()]>=heights[i]){
                st2.pop();
            }
            if(st2.empty())
                rm[i]=-1;
            else
                rm[i]=st2.top();
            st2.push(i);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(rm[i]==-1)
                rm[i]=n;
            int maxi= (rm[i]-1-lm[i])*heights[i];
            ans=max(maxi,ans);
        }
        return ans;
    }
};